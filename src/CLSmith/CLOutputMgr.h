// Outputs to the designated stream such that the resulting file can be compiled
// as OpenCL C.
// Relies on the caller to disable parts of the program that produce invalid
// OpenCL C, as this class will call the output function of the standard csmith
// output managers.

#ifndef _CLSMITH_CLOUTPUTMGR_H_
#define _CLSMITH_CLOUTPUTMGR_H_

#include <fstream>
#include <string>

#include "CommonMacros.h"
#include "OutputMgr.h"

namespace CLSmith {

class Globals;

class CLOutputMgr : public OutputMgr {
public:
  CLOutputMgr();
  explicit CLOutputMgr(const std::string &filename)
      : out_(filename.c_str()), header_out_("kernel.hpp") {}
  explicit CLOutputMgr(const char *filename)
      : out_(filename), header_out_("kernel.hpp") {}
  ~CLOutputMgr() { out_.close(); }

  // Outputs information regarding the runtime to be read by the host code
  void OutputRuntimeInfo(const std::vector<unsigned int> &threads,
                         const std::vector<unsigned int> &groups);

  // Inherited from OutputMgr. Outputs comments, #defines and forward
  // declarations.
  void OutputHeader(int argc, char *argv[], unsigned long seed);

  // Inherited from OutputMgr. Outputs all the definitions.
  void Output();

  // Inherited from OutputMgr. Gets the stream used for printing the output.
  std::ostream &get_main_out();

  // Gets the stream used for printing the output header.
  std::ostream &get_header_out();

  // Outputs the kernel entry function. OutputMain in OutputMgr isn't virtual,
  // so we can't override it.
  void OutputEntryFunction(Globals &globals);

  void OutputFunctionDeclear(std::ostream &out);

private:
  std::ofstream out_;
  std::ofstream header_out_;

  DISALLOW_COPY_AND_ASSIGN(CLOutputMgr);
};

} // namespace CLSmith

#endif // _CLSMITH_CLOUTPUTMGR_H_
