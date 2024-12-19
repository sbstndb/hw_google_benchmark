# Benchmarking Showcase with Hardware Counters

## Overview

This project integrates [Google Benchmark](https://github.com/google/benchmark) with hardware performance counters to provide detailed insights into the performance of various test cases. By leveraging hardware counters such as branch instructions and branch misses, developers can gain a deeper understanding of their code's behavior and optimize accordingly.

## Features

- **Hardware Performance Counters**: Measure branch instructions and branch misses for each benchmark test case.

## Prerequisites

Before setting up the project, ensure that your system meets the following requirements:

- **libPFM**: This library is essential for accessing hardware performance counters.
  - **Compatibility**: 
    - **Supported**: Most x86 CPUs.
    - **Not Supported**: Recent Intel Meteor Lake CPUs and Apple Silicon (Mac) CPUs.
  - **Installation**:
    - **Ubuntu**:
      ```bash
      sudo apt-get install libpfm4 libpfm4-dev
      ```
    - **macOS**: libPFM is not compatible with Mac Silicon CPUs.

# Result
Here are the outputs allowed by `google-benchmark` thanks to the `libpfm` library : 
```
------------------------------------------------------------------------------------
Benchmark                          Time             CPU   Iterations UserCounters...
------------------------------------------------------------------------------------
BM_VectorAddition/4             13.6 ns         13.6 ns     51675446 BRANCH-MISSES=34.9876u BRANCHES=49 CYCLES=59.6877 INSTRUCTIONS=216
BM_VectorAddition/8             13.7 ns         13.7 ns     51046264 BRANCH-MISSES=35.3209u BRANCHES=49 CYCLES=60.5653 INSTRUCTIONS=221
BM_VectorAddition/64            17.2 ns         17.1 ns     41025920 BRANCH-MISSES=42.5828u BRANCHES=65 CYCLES=75.7471 INSTRUCTIONS=332
BM_VectorAddition/512           79.4 ns         79.1 ns      8694617 BRANCH-MISSES=1.00018 BRANCHES=232 CYCLES=352.134 INSTRUCTIONS=1.41k
BM_VectorAddition/4096           727 ns          725 ns       963024 BRANCH-MISSES=2.00095 BRANCHES=1.245k CYCLES=3.24811k INSTRUCTIONS=8.502k
BM_VectorAddition/32768         5387 ns         5368 ns       134161 BRANCH-MISSES=2.0069 BRANCHES=9.31001k CYCLES=24.0413k INSTRUCTIONS=64.955k
BM_VectorAddition/262144       45465 ns        45297 ns        15445 BRANCH-MISSES=2.0808 BRANCHES=73.8221k CYCLES=202.514k INSTRUCTIONS=516.547k
BM_VectorAddition/1048576     253128 ns       251669 ns         2754 BRANCH-MISSES=2.70915 BRANCHES=295.007k CYCLES=1.13158M INSTRUCTIONS=2.06484M
```
