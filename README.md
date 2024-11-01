### Commands To Run
To begin running `perf` and other tools in linux as needed in the program, we will have to ensure certain linux tools and utilities are installed and configured. Also, certain accesses are enabled for `perf`.

##### Linux tools:
```bash
sudo apt install -y build-essential linux-tools-common linux-tools-generic  linux-tools-$(uname -r)
```
##### Language support:
```bash
sudo apt install python3 gcc g++ make
```
##### Access to perf:
```bash
sudo sysctl kernel.perf_event_paranoid=-1
```

##### We run the main program as:
```bash
SEED=24212 make run
```
###### It is to be noted that as we run the modified program with different SEED or at different times, we may see change in our choice of optimal configuration.

### Analysis
Our main.cpp program internally runs this command to generate one perf log file per thread for each config, and save the perf process IDs in a perf_pids.txt file, so as to output the perf log data into respective log files when the threads end by ending the perf processes.
```bash
perf stat -e cycles,instructions,cache-references,cache-misses -p <TID> 
--output perf_thread_config_<CONFIG>_<TID>.log& echo $!>>perf_pids.txt
```
<br>
The above command will cause the perf processes, one for each thread in a particular configuration, to run in background. When the threads are ended, the perf processes will be ended too, and the log data so captured will be dumped into respective log files. If we don't end the perf processes, they will continue to run in the background till the entire process (main process) finishes, which is running all the configurations one by one. If this happens, perf log data won’t be dumped into log files, until the entire process finishes. Then our analyze.py which is internally called to make analysis and determine best CPU configuration won’t get any data.
Thus, we need to ensure that as soon as all threads of the config ends, the log files are dumped.

Our main.cpp program internally runs this command to analyze all the 72 log files generated for all configurations and obtain the best configuration, that is one which minimizes the total cache-misses.
```cpp
python3 analyze.py
```
When the analysis finishes, the file cpu_affinities_of_threads.txt contains the CPU preferences for the three threads in that order. This file is then read in our main.cpp program to return answers to the calls by
```cpp
int32_t get_thread_affinity(uint32_t threadIdx)
``` 


##### Author: Akash Maji
##### Email: akashmaji@iisc.ac.in

