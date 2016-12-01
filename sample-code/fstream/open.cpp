// fstream::open / fstream::close
#include <fstream>      // std::fstream

int main () {

  std::fstream fs;
  fs.open ("test.txt", std::fstream::in | std::fstream::out | std::fstream::app);

  fs << " more lorem ipsum";

  fs.close();

  return 0;
}