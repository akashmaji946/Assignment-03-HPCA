#include <iostream>
#include <stdlib.h>
#include "work.h"

/*
"""
Author: Akash Maji
Email: akashmaji@iisc.ac.in
"""
*/

/* neccessary headers */
#include <sstream>
#include <fstream>
#include <assert.h>
#include <unistd.h>
#include <sys/syscall.h> 
#include <sys/wait.h>
#include <signal.h>
#include<vector>
using namespace std;

/* all possible thread to cpu assignments */
std::vector<std::vector<int>> thread_to_cpu_allocations = {
        {0, 1, 2}, {0, 2, 1}, {0, 1, 3}, {0, 3, 1}, {0, 2, 3}, {0, 3, 2},
        {1, 0, 2}, {1, 2, 0}, {1, 0, 3}, {1, 3, 0}, {1, 2, 3}, {1, 3, 2},
        {2, 0, 1}, {2, 1, 0}, {2, 0, 3}, {2, 3, 0}, {2, 1, 3}, {2, 3, 1},
        {3, 0, 1}, {3, 1, 0}, {3, 0, 2}, {3, 2, 0}, {3, 1, 2}, {3, 2, 1}
};

int choice;
std::vector<int> order;

/* final cpu assignments after analysis */
std::vector<int> thread_affinities = {-1, -1, -1};

std::vector<pid_t> perf_pids = {0, 0, 0};

// implement the functions here.

/* set the thread `handle` with index `threadIdx` to run on CPU `cpu` */
void set_thread_affinity(uint32_t threadIdx, pthread_t handle, int cpu) {

    cpu_set_t cpuset;
    CPU_ZERO(&cpuset);
    CPU_SET(cpu, &cpuset);

    int result = pthread_setaffinity_np(handle, sizeof(cpu_set_t), &cpuset);
    if (result != 0) {
        std::cerr << "Error setting affinity for thread " << threadIdx << " to CPU " << cpu << std::endl;
    }

}

void start_monitoring_for_thread(uint32_t threadIdx, pid_t tid, pthread_t handle) {
    // Get the current thread ID (TID)
    // pid_t tid = syscall(SYS_gettid);
    
    /* get and set cpu affinity for thread */
    int cpu = order[threadIdx];
    set_thread_affinity(threadIdx, handle, cpu);

    /* Construct the perf command to measure parameters */
    std::stringstream ss;
    ss << "perf stat -e cycles,instructions,cache-references,cache-misses -p "
       << tid << " --output perf_thread_config_" << choice << "_" << threadIdx << ".log& echo $!>>perf_pids.txt";

    
    /* Run the command using system() */
    std::string command = ss.str();
    system(command.c_str());
    perf_pids[threadIdx] = tid;

}

void stop_monitoring_for_thread(uint32_t threadIdx) {
    /* not implemneted, as was optional */
}

/* return optimal CPU affinity for thread `threadIdx` */
int32_t get_thread_affinity(uint32_t threadIdx) {
  return thread_affinities[threadIdx];
}

/* Post analysis, the best assignment is saved in a file, so read it in */
void get_thread_affinities_from_file(string filename){
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Error opening the affinity file." << std::endl;
        return;
    }
    std::string line;
    int threadIdx = 0;
    while (std::getline(file, line)) {
        int affinity = stoi(line);
        thread_affinities[threadIdx++] = affinity;
    }
    file.close();
}

void kill_perf_and_save_log(){
      std::ifstream file("perf_pids.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening the affinity file." << std::endl;
        return;
    }
    std::string line;
    int threadIdx = 0;
    while (std::getline(file, line)) {
        int pid = stoi(line);
        if (kill(pid, SIGINT) == 0){
          // cout << "Killed:" << pid << endl;
        }
    }
    file.close();
}

int main(int argc, char **argv) {
  // DO NOT MODIFY THE FOLLOWING BLOCK.
  // =================================================
  if (argc != 2)
  {
    printf("Usage: %s <seed>\n", argv[0]);
    return 1;
  }
  int sr_no = atoi(argv[1]);
  int num_threads = work_init(sr_no);
  // =================================================
  // Modify below this
  cout << "The number of threads: " << num_threads << std::endl;

  system("rm -rf perf_*.log");
  system("rm -rf *.txt");

  for(choice = 0; choice < 24; choice++){

    order = thread_to_cpu_allocations[choice];

    // Modify above this
    // DO NOT MODIFY THE FOLLOWING BLOCK.
    // =================================================
    work_start_monitoring();
    // =================================================

    // Modify below this
    kill_perf_and_save_log();

    sync();

  }

  sync();
  system("python3 analyze.py");
  get_thread_affinities_from_file("cpu_affinities_of_threads.txt");

  // Modify above this
  // DO NOT MODIFY THE FOLLOWING BLOCK.
  work_run();
  // =================================================

  // Modify below this
  return 0;

}

