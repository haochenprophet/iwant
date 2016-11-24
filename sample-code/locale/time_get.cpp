/ time_get::get example
#include <iostream>       // std::cout, std::ios
#include <string>         // std::string
#include <sstream>        // std::istringstream
#include <ctime>          // std::tm
#include <locale>         // std::locale, std::time_get, std::use_facet

int main ()
{
  std::locale loc;        // classic "C" locale

  // get time_get facet:
  auto& tmget = std::use_facet <std::time_get<char> > (loc);

  std::ios::iostate state;
  std::istringstream iss ("year:2013 month:09 day:10");
  std::string format ("year:%Y month:%m day:%d");
  std::tm when;

  tmget.get (iss, std::time_get<char>::iter_type(), iss, state, &when,
             format.data(), format.data()+format.length() );

  std::cout << "year: " << when.tm_year << '\n';
  std::cout << "mon: " << when.tm_mon << '\n';
  std::cout << "mday: " << when.tm_mday << '\n';
  return 0;
}