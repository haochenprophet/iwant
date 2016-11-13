// filebuf::open()
#include <iostream>
#include <fstream>

int main () {
  std::ifstream is;
  std::filebuf * fb = is.rdbuf();

  fb->open ("test.txt",std::ios::out|std::ios::app);

  // >> appending operations here <<

  fb->close();

  return 0;
}

