// Julian Kasden
// juliankasden@csu.fullerton.edu
// @Julianth3Julian
// Partners: @Therunlal99

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};

  int len{static_cast<int>(arguments.size())};
  if (len != 4) {
    std::cout << "error: you must supply three arguments";
    return 1;
  }
  // XTODO: Declare three std::string variables to hold the
  // protein, bread, and condiment input.
  // Initialize each variable with an element of the arguments vector
  // declared above.
  std::string protein{arguments[1]};
  std::string bread{arguments[2]};
  std::string condiment{arguments[3]};

  // XTODO: Use cout to print output following the pattern
  // Your order: A *PROTEIN* sandwich on *BREAD* with *CONDIMENT*.
  // on its own line.
  std::cout << "Your order:\nA " << protein << " sandwich on ";
  std::cout << bread << " with " << condiment << ".";

  return 0;
}
