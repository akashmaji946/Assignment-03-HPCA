#include <iostream>
#include <stdlib.h>
#include "work.h"

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
    // cout << "Starting perf monitoring for thread " << threadIdx << ":\n\t\t" << command << std::endl;
    cout << "called start\n";
    cout << "thread:" << threadIdx << "=>" << tid << endl;
    system(command.c_str());
    perf_pids[threadIdx] = tid;
    // if(threadIdx==0)system("pid0=$pid");
    // if(threadIdx==1)system("pid1=$pid");
    // if(threadIdx==2)system("pid2=$pid");
    // system("echo $pid");
    /* log the threadId */
    // string cmd = "echo " + to_string(tid) + " >> " + "processes.txt";
    // system(cmd.c_str());
    //   // Run the perf command synchronously with popen
    // FILE* pipe = popen(command.c_str(), "r");
    // if (!pipe) {
    //     std::cerr << "Failed to start perf monitoring for thread " << threadIdx << std::endl;
    // } else {
    //     // Ensure the command completes and output is flushed before continuing
    //     pclose(pipe);
    //     std::cout << "Perf monitoring for thread " << threadIdx << " completed." << std::endl;
    // }
}

void stop_monitoring_for_thread(uint32_t threadIdx) {
    /* not implemneted, as was optional */
        // int status;
        // pid_t pid = waitpid(-1, &status, 0);
        // pid_t perf_pid = perf_pids[threadIdx];
        // if (kill(perf_pid, SIGINT) == 0) { // Send SIGINT to stop `perf`
        //     std::cout << "Stopped perf for thread " << threadIdx << std::endl;
        // } else {
        //     perror("Failed to stop perf");
        // }
        // cout << "called stop\n";
        // if(threadIdx==0)system("echo $pid0; kill -INT $pid0");
        // if(threadIdx==1)system("echo $pid1; kill -INT $pid1");
        // if(threadIdx==2)system("echo $pid2; kill -INT $pid2");
}

int32_t get_thread_affinity(uint32_t threadIdx) {
  // cout << "Called get_thread_affinity(): thread=>" 
  //      << threadIdx << ", affinity=>" << thread_affinities[threadIdx];
  cout << "Called GET():" << thread_affinities[threadIdx] << "\n";
  return thread_affinities[threadIdx];
}

/* post analysis, the best assignment is saved in a file, so read it in */
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

/* dummy test function (don't remove) */
// void format(vector<int> v){
//   cout << "[ ";
//   for(int& a: v){
//     cout << a << "  ";
//   }
//   cout << " ]";
// }

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

  // system("pidof main >> processes.txt");
  // cout << "Parent Process:" << getpid() << endl;
  // string cmd = "ls /proc/" + to_string(getpid()) + "/task/ >> file2.txt";
  // cout << cmd << endl;
  // assert(system(cmd.c_str()) == 0);


  for(choice = 0; choice < 24; choice++){

    // cout << "\n\tChoice =>" << choice << ". Config => ";
    // format(thread_to_cpu_allocations[choice]);
    // cout << endl;

    order = thread_to_cpu_allocations[choice];

    // Modify above this
    // DO NOT MODIFY THE FOLLOWING BLOCK.
    // =================================================
    work_start_monitoring();
    // =================================================

    // Modify below this
    // cout << "\n  Waiting for threads to finish on config:" << choice << "\n";
    // Wait for all threads to finish
    // for (int threadIdx = 0; threadIdx < num_threads; ++threadIdx) {
    //     int status;
    //     pid_t pid = waitpid(-1, &status, 0);  // Wait for any child process
    //     if (pid == -1) {
    //         std::cerr << "Error waiting for thread monitoring processes to complete." << std::endl;
    //     }
    // }
    std::ifstream file("perf_pids.txt");
    if (!file.is_open()) {
        std::cerr << "Error opening the affinity file." << std::endl;
        return 1;
    }
    std::string line;
    int threadIdx = 0;
    while (std::getline(file, line)) {
        int pid = stoi(line);
        if (kill(pid, SIGINT) == 0){
          cout << "Killed:" << pid << endl;
        }
    }
    file.close();

    sync();

  }
  // sleep(5);
  // Your code / script for analysis goes here.
  // system("sync");
  sync();
  system("python3 analyze.py");
  get_thread_affinities_from_file("cpu_affinities_of_threads.txt");
  cout << "Called\n";
  // Modify above this
  // DO NOT MODIFY THE FOLLOWING BLOCK.
  work_run();
  // =================================================

  // Modify below this
  cout << "Called again\n";
  return 0;

}

