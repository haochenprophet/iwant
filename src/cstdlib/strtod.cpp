#include "strtod.h"
int Cstrtod::my_init(void *p)
{
	this->name = "Cstrtod";
	this->alias = "strtod";
	return 0;
}

Cstrtod::Cstrtod()
{
	this->my_init();
}

Cstrtod::~Cstrtod()
{

}

double Cstrtod::strtod_c(const char* str, char** endptr)
{
	return strtod( str, endptr);
}
#ifndef STRTOD_TEST
#define STRTOD_TEST 0//1
#endif

#if STRTOD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRTOD_TEST\n\n";

	return 0;
}
#endif 