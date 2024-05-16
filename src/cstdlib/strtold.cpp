#include "strtold.h"
int Cstrtold::my_init(void *p)
{
	this->name = "Cstrtold";
	this->alias = "strtold";
	return 0;
}

Cstrtold::Cstrtold()
{
	this->my_init();
}

Cstrtold::~Cstrtold()
{

}
long double Cstrtold::strtold_c(const char* str, char** endptr)
{
	return strtold( str, endptr);
}
#ifndef STRTOLD_TEST
#define STRTOLD_TEST 0//1
#endif

#if STRTOLD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRTOLD_TEST\n\n";

	return 0;
}
#endif 