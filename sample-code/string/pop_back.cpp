// string::pop_back
#include <iostream>
#include <string>

int main ()
{
  std::string str ("hello world!");
  str.pop_back();
  std::cout << str << '\n';
  return 0;
}