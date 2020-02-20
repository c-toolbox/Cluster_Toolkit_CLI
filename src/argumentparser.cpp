#include <argumentparser.h>

namespace {
struct CmdLineArg {
  CmdLineArg(std::string key_short,
             std::string key_long,
             std::string value,
             std::string help_string)
      : key_short(key_short),
        key_long(key_long),
        value(value),
        help_string(help_string) {}
  void print() const {
    printf("\t-%s, --%s\n", key_short.c_str(), key_long.c_str());
    printf("%s\n", help_string.c_str());
  }

  std::string key_short;
  std::string key_long;
  std::string value;
  std::string help_string;
};

const std::vector<std::string> AVAILABLE_FLAGS = {""};

const std::vector<CmdLineArg> CMDLINE_ARGS = {
    {"h", "help", "", "\t\tPrints this message and exits \n"},
    {"q", "query_all", "",
     "\t\tQueries all currently specified queries and prints the result of \n"
     "\t\tthose queries."},
    {"s", "set_flag", "",
     "\t\tSets the specified [FLAG] to the specified [VALUE]"},
};

}  // namespace

namespace toolkit {

ArgumentParser::ArgumentParser() {}

void ArgumentParser::printHelp() {
  printf("Cluster_Toolkit_CLI\n\n");
  for (auto& cmdarg : CMDLINE_ARGS) {
    cmdarg.print();
  }
  exit(1);
}

void ArgumentParser::acceptArgs(int argc, char** argv) {
  if (argc == 1) {
    printHelp();
    return;
  }

  for (int i = 1; i < argc;) {
    int num_accepted_args = 1;
    std::string argument = argv[i];
    auto last_dash_pos = argument.find_last_of('-');
    if (last_dash_pos == std::string::npos) {
      printf("Invalid arguments!\n");
      printHelp();
      return;
    }

    bool short_key = true;
    if (last_dash_pos == 1) {
      short_key = false;
      num_accepted_args++;
    } else if (last_dash_pos != 0) {
      printf("Invalid argument \"%s\" \n", argument.c_str());
      printHelp();
      return;
    }

    std::string trimmed_arg = argument.substr(last_dash_pos+1);
    
    for (const auto& arg : CMDLINE_ARGS) {
      if (arg.key_short == trimmed_arg || arg.key_long == trimmed_arg) {
        arg.print();
        num_accepted_args++;
        break;
      }
    }
    i += num_accepted_args;
  }
}

}  // namespace toolkit
