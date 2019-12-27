#include "common.hpp"
#include "kernel.hpp"

int main(int argc, char **argv) {
  argument arg;
  if (!arg.parse(argc, argv)) {
    return 1;
  }
  std::string platform_name = arg.get_required_value("p");
  std::string device_name = arg.get_required_value("d");
  fuzz_selector selector(platform_name, device_name);

  const int dim = 1024;
  const int local_dim = 64;
  std::vector<ulong> result(dim);

  {
    cl::sycl::queue queue(selector);
    cl::sycl::range<1> global_range(dim);
    cl::sycl::range<1> local_range(local_dim);
    cl::sycl::buffer<ulong, 1> res_buffer(result.data(), global_range);

#if defined(SINGLE_TASK)
    queue.submit([&](cl::sycl::handler &cgh) {
      auto acc =
          res_buffer.template get_access<cl::sycl::access::mode::read_write>(
              cgh);
      cgh.single_task<class fuzz_kernel>([=]() {
        kernel(global_range, acc);
      }); // Input range to prevent out-of-bound
    });
#elif defined(PARALLEL_FOR_RANGE)
    queue.submit([&](cl::sycl::handler &cgh) {
      auto acc =
          res_buffer.template get_access<cl::sycl::access::mode::read_write>(
              cgh);
      cgh.parallel_for<class fuzz_kernel>(
          global_range, [=](cl::sycl::item<1> item) { kernel(item, acc); });
    });
#elif defined(PARALLEL_FOR_ND_RANGE)
    queue.submit([&](cl::sycl::handler &cgh) {
      auto acc =
          res_buffer.template get_access<cl::sycl::access::mode::read_write>(
              cgh);
      cgh.parallel_for<class fuzz_kernel>(
          cl::sycl::nd_range<1>(global_range, local_range),
          [=](cl::sycl::nd_item<1> item) { kernel(item, acc); });
    });
#elif defined(PARALLEL_FOR_WORK_ITEM)
    queue.submit([&](cl::sycl::handler &cgh) {
      auto acc =
          res_buffer.template get_access<cl::sycl::access::mode::read_write>(
              cgh);
      cgh.parallel_for_work_group<class fuzz_kernel>(
          global_range, local_range, [=](cl::sycl::group<1> group) {
            group.parallel_for_work_item(
                [&] cl::sycl::h_item<1> item { kernel(item, acc); });
          });
    });
#elif defined(PARALLEL_FOR_WORK_GROUP)
    queue.submit([&](cl::sycl::handler &cgh) {
      auto acc =
          res_buffer.template get_access<cl::sycl::access::mode::read_write>(
              cgh);
      cgh.parallel_for_work_group<class fuzz_kernel>(
          global_range, local_range,
          [=](cl::sycl::group<1> group) { kernel(item, acc); });
    });
#else
    std::cout << "Invalid kernel submitting way" << std::endl;
    return 1;
#endif
  }

#ifndef SINGLE_TASK
  // Data verification
  ulong baseline = result[0];
  for (size_t i = 0; i < dim; ++i) {
    if (result[i] != baseline) {
      printf("Result mismatch in %zu: %lu vs %lu \n", i, result[i], baseline);
    } else {
      printf("Position %zu: %lu \n", i, result[i]);
    }
  }
#else
  std::cout << "single_task can't verify final result" << std::endl;
#endif
  return 0;
}