// string::push_back
#include <iostream>
#include <fstream>
#include <string>

int main ()
{
  std::string str;
  std::ifstream file ("test.txt",std::ios::in);
  if (file) {
    while (!file.eof()) str.push_back(file.get());
  }
  std::cout << str << '\n';
  return 0;
}