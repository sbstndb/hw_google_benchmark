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

