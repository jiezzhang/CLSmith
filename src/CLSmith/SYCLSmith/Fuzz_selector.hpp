#ifndef _SYCLSMITH_FUZZ_SELECTOR_H_
#define _SYCLSMITH_FUZZ_SELECTOR_H_
#include "Argument_parse.hpp"
#include "common.hpp"

struct simple_async_handler {
  void operator()(cl::sycl::exception_list l) {
    for (auto &e : l) {
      std::rethrow_exception(e);
    }
  }
};

struct device_type_parser {
  enum sycl_device_type {
    none = 0,
    host = 100,
    cpu = 300,
    acc = 400,
    gpu = 500
  };
  enum sycl_platform_type { unknown, intel, arm, amd, nvidia };
  static sycl_device_type parse_device_option(std::string type) {
    if (type == std::string("host")) {
      return sycl_device_type::host;
    } else if (type == std::string("cpu")) {
      return sycl_device_type::cpu;
    } else if (type == std::string("acc")) {
      return sycl_device_type::acc;
    } else if (type == std::string("gpu") || type.empty()) {
      return sycl_device_type::gpu;
    }
    return sycl_device_type::none;
  }
  static sycl_platform_type parse_platform_option(std::string type) {
    if (type == std::string("intel")) {
      return sycl_platform_type::intel;
    } else if (type == std::string("arm")) {
      return sycl_platform_type::arm;
    } else if (type == std::string("amd")) {
      return sycl_platform_type::amd;
    } else if (type == std::string("nvidia")) {
      return sycl_platform_type::nvidia;
    }
    return sycl_platform_type::unknown;
  }
};

class fuzz_selector : public cl::sycl::device_selector {
public:
  typedef device_type_parser::sycl_device_type sycl_dev_type;
  typedef device_type_parser::sycl_platform_type sycl_plat_type;

  fuzz_selector(std::string plat_name, std::string dev_name)
      : dev_type(device_type_parser::parse_device_option(dev_name)),
        plat_type(device_type_parser::parse_platform_option(plat_name)) {}

  int score(cl::sycl::info::device_type type, sycl_dev_type desired) const {
    int result = -1;

    // type == all device matches all, return early
    if (type == cl::sycl::info::device_type::all) {
      result = 1000;
    }

    switch (desired) {
    case sycl_dev_type::host:
      if (type == cl::sycl::info::device_type::host) {
        result = 1000;
      }
      break;
    case sycl_dev_type::cpu:
      if (type == cl::sycl::info::device_type::cpu) {
        result = 1000;
      }
      break;
    case sycl_dev_type::gpu:
      if (type == cl::sycl::info::device_type::gpu) {
        result = 1000;
      }
      break;
    case sycl_dev_type::acc:
      if (type == cl::sycl::info::device_type::accelerator) {
        result = 1000;
      }
      break;
    default:
      result = -1;
    }
    // Device does not match the requested type
    return result;
  }

  // Return device score based on device type required and found.
  // Priority: gpu>acc>cpu>host
  virtual int operator()(const cl::sycl::device &dev) const override {
    int result = -1;

    cl::sycl::string_class vendor =
        dev.get_platform().get_info<cl::sycl::info::platform::name>();
    cl::sycl::info::device_type type =
        dev.get_info<cl::sycl::info::device::device_type>();

    switch (plat_type) {
    case sycl_plat_type::amd:
      if (vendor.find("AMD") != std::string::npos) {
        result = score(type, dev_type);
      }
      break;
    case sycl_plat_type::arm:
      if (vendor.find("ARM") != std::string::npos) {
        result = score(type, dev_type);
      }
      break;
    case sycl_plat_type::intel:
      if (vendor.find("Intel") != std::string::npos) {
        result = score(type, dev_type);
      }
      break;
    case sycl_plat_type::nvidia:
      if (vendor.find("NVIDIA") != std::string::npos) {
        result = score(type, dev_type);
      }
      break;
    default:
      result = -1;
    }

    return result;
  }

private:
  sycl_dev_type dev_type;
  sycl_plat_type plat_type;
};

#endif
