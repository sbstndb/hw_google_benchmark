#include <benchmark/benchmark.h>
#include <vector>
#include <numeric>

std::vector<int> add_vectors(const std::vector<int>& a, const std::vector<int>& b) {
  std::vector<int> result(a.size());
  for (size_t i = 0; i < a.size(); ++i) {
    result[i] = a[i] + b[i];
  }
  return result;
}

static void BM_VectorAddition(benchmark::State& state) {
  const size_t size = state.range(0);
  std::vector<int> a(size, 1);
  std::vector<int> b(size, 2);

  for (auto _ : state) {
    std::vector<int> result = add_vectors(a, b);
    benchmark::DoNotOptimize(result);
  }
}

BENCHMARK(BM_VectorAddition)->Range(1<<10, 1<<20);
BENCHMARK_MAIN();

