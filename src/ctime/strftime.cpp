#include "strftime.h"
int Cstrftime::my_init(void *p)
{
	this->name = "Cstrftime";
	this->alias = "strftime";
	return 0;
}

Cstrftime::Cstrftime()
{
	this->my_init();
}

Cstrftime::~Cstrftime()
{

}

size_t Cstrftime::strftime_c(char* ptr, size_t maxsize, const char* format, const struct tm* timeptr)
{
	return strftime(ptr, maxsize, format, timeptr);
}

#ifndef STRFTIME_TEST
#define STRFTIME_TEST 0//1
#endif

#if STRFTIME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRFTIME_TEST\n\n";

	return 0;
}
#endif 