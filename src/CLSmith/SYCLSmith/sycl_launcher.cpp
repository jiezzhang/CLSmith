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

    queue.submit([&](cl::sycl::handler &cgh) {
      auto acc =
          res_buffer.template get_access<cl::sycl::access::mode::read_write>(
              cgh);
      cgh.parallel_for<class fuzz_kernel>(
          cl::sycl::nd_range<1>(global_range, local_range),
          [=](cl::sycl::nd_item<1> item) { kernel(item, acc); });
    });
  }
}