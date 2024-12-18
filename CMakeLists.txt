cmake_minimum_required(VERSION 3.10)
project(vector_addition_benchmark)

option(BENCHMARK_DOWNLOAD_DEPENDENCIES "Download Google Benchmark from GitHub" ON)

if(BENCHMARK_DOWNLOAD_DEPENDENCIES)
  include(FetchContent)
  FetchContent_Declare(
    benchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG        v1.9.1 # Vous pouvez spécifier une autre version si nécessaire
  )
  FetchContent_MakeAvailable(benchmark)
endif()


add_executable(vector_addition_benchmark main.cpp)

target_link_libraries(vector_addition_benchmark benchmark::benchmark)

