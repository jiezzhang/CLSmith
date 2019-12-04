#ifndef _SYCLSMITH_ARGUMENT_PARSE_H_
#define _SYCLSMITH_ARGUMENT_PARSE_H_

#include <iostream>
#include <map>
#include <string>

#define is(X) arg.get_optional_value(X)

class argument {
public:
  argument();
  void print_help();
  bool parse(int argc, char **argv);
  std::string get_required_value(std::string key) { return required_list[key]; }
  bool get_optional_value(std::string key) { return optional_list[key]; }

private:
  std::string get_key(std::string tmp) {
    int pos = tmp.find_first_not_of('-');
    return std::string(tmp.begin() + pos, tmp.end());
  }
  void add_required_option(std::string opt) { required_list[opt] = ""; }
  void add_optional_option(std::string opt) { optional_list[opt] = ""; }

private:
  std::map<std::string, std::string> required_list;
  std::map<std::string, bool> optional_list;
};

argument::argument() {
  add_required_option("p");
  add_required_option("d");

  add_optional_option("debug");
}
void argument::print_help() {
  std::cout << "Usage: ./cl_launcher -f <cl_program> -p <platform_idx> -d "
               "<device_idx> [flags...]\n";
  std::cout << "\n";
  std::cout << "Required flags are:\n";
  std::cout << "  -p IDX  --platform_idx IDX                Target platform\n";
  std::cout << "  -d IDX  --device_idx IDX                  Target device\n";
  std::cout << "\n";
  std::cout << "Optional flags are:\n";
  std::cout << "                      ---debug              Print debug info\n";
}

bool argument::parse(int argc, char **argv) {
  for (int i = 1; i < argc; i++) {
    std::string cur_arg = std::string(argv[i]);
    if (cur_arg == std::string("-p")) {
      required_list["p"] = std::string(argv[++i]);
    } else if (cur_arg == std::string("-d")) {
      required_list["d"] = std::string(argv[++i]);
    } else if (cur_arg == std::string("---debug")) {
      optional_list["debug"] = true;
    } else if (cur_arg == std::string("-h")) {
      print_help();
      return false;
    } else {
      std::cout << "Failed parsing arg " << cur_arg << ".\n";
      return false;
    }
  }
  return true;
}

#endif