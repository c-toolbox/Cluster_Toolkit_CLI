#pragma once

namespace toolkit {

class ArgumentParser {
 public:
  ArgumentParser();
  void printHelp();
  void acceptArgs(int argc, char** argv);

 private:
  std::vector<std::string> _stringVec;
};

}  // namespace toolkit
