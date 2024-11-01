"""
Author: Akash Maji
Email: akashmaji@iisc.ac.in
"""

import glob
import time
thread_to_cpu_permutations = [
    [0, 1, 2], [0, 2, 1], [0, 1, 3], [0, 3, 1], [0, 2, 3], [0, 3, 2],
    [1, 0, 2], [1, 2, 0], [1, 0, 3], [1, 3, 0], [1, 2, 3], [1, 3, 2],
    [2, 0, 1], [2, 1, 0], [2, 0, 3], [2, 3, 0], [2, 1, 3], [2, 3, 1],
    [3, 0, 1], [3, 1, 0], [3, 0, 2], [3, 2, 0], [3, 1, 2], [3, 2, 1]
]

def parse_perf_output_log(file_path):
    """
    file_path: perf_thread_config_0_0.log
    reads in a file named `file_path` and obatins metrics like cache misses for the `config`
    returns a 'dict' with the metrics
    """
    metrics = {}
    config = int(file_path.split("_")[-2])
    with open(file_path, 'r') as f:
        for line in f:
            if 'cycles' in line:
                metrics['cycles'] = int(line.split()[0].replace(',', ''))
            elif 'instructions' in line:
                metrics['instructions'] = int(line.split()[0].replace(',', ''))
            elif 'cache-references' in line:
                metrics['cache-references'] = int(line.split()[0].replace(',', ''))
            elif 'cache-misses' in line:
                metrics['cache-misses'] = int(line.split()[0].replace(',', ''))
            elif 'seconds' in line:
                metrics['seconds'] = float(line.split()[0].replace(',', ''))
    return config, metrics

def find_best_cpu_configuration():
    """
    reads in all perf log files starting as `perf_thread_config_*` and
    obatins the file and config which corresponds to min. cache misses
    returns best_config as an 'int' (index into)
    """
    perf_files = glob.glob('perf_thread_config_*.log')
    best_config = None
    best_metric = float('inf')
    cache_misses_in_config = {}

    for perf_file in perf_files:
        config, config_metrics = parse_perf_output_log(perf_file)
        # print(config, config_metrics)
        if "cache-misses" in config_metrics:
            if config not in cache_misses_in_config:
                cache_misses_in_config[config] = config_metrics['cache-misses']
            else:
                cache_misses_in_config[config] += config_metrics['cache-misses']

    print("Choice:    Config:  Cache Misses")
    for config in sorted(cache_misses_in_config):
        # Assuming lower cache misses are better
        print("{:6d}: {}: {}".format(config, thread_to_cpu_permutations[config], cache_misses_in_config[config]))
        if cache_misses_in_config[config] < best_metric:
            best_metric = cache_misses_in_config[config]
            best_config = config

    print(f"Best CPU configuration based on cache misses: config {best_config}:{thread_to_cpu_permutations[best_config]}, with {best_metric} cache misses")
    return best_config

def find_best_cpu_time():
    """
    reads in all perf log files starting as `perf_thread_config_*` and
    obatins the file and config which corresponds to min. cache misses
    returns best_config as an 'int' (index into)
    """
    perf_files = glob.glob('perf_thread_config_*.log')
    best_config = None
    best_metric = float('inf')
    time_taken_in_config = {}

    for perf_file in perf_files:
        config, config_metrics = parse_perf_output_log(perf_file)
        # print(config, config_metrics)
        if "seconds" in config_metrics:
            if config not in time_taken_in_config:
                time_taken_in_config[config] = config_metrics['seconds']
            else:
                time_taken_in_config[config] += config_metrics['seconds']

    print("Choice:    Config:  Seconds")
    for config in sorted(time_taken_in_config):
        # Assuming lower cache misses are better
        print("{:6d}: {}: {}".format(config, thread_to_cpu_permutations[config], time_taken_in_config[config]/3))
        if time_taken_in_config[config]/3 < best_metric:
            best_metric = time_taken_in_config[config]/3
            best_config = config

    print(f"Best CPU configuration based on time taken: config {best_config}:{thread_to_cpu_permutations[best_config]}, with {best_metric} seconds")
    return best_config

if __name__ == "__main__":
    # time.sleep(10)
    # print("Reading...")

    best_time = find_best_cpu_time()
    # print(best_time)

    best_config = find_best_cpu_configuration()
    # print(" Choice =>", best_config)
    affinities = thread_to_cpu_permutations[best_config]
    # print(" Config =>", affinities)
    threadIdx = 1
    with open("cpu_affinities_of_threads.txt", 'w') as f:
        for affinity in affinities:
            f.write(str(affinity) + "\n")

    
