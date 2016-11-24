// stof example
#include <iostream>   // std::cout
#include <string>     // std::string, std::stof

int main ()
{
  std::string orbits ("686.97 365.24");
  std::string::size_type sz;     // alias of size_t

  float mars = std::stof (orbits,&sz);
  float earth = std::stof (orbits.substr(sz));
  std::cout << "One martian year takes " << (mars/earth) << " Earth years.\n";
  return 0;
}