#include "gmtime.h"
int Cgmtime::my_init(void *p)
{
	this->name = "Cgmtime";
	this->alias = "gmtime";
	return 0;
}

Cgmtime::Cgmtime()
{
	this->my_init();
}

Cgmtime::~Cgmtime()
{

}

#ifndef GMTIME_TEST
#define GMTIME_TEST 0//1
#endif

#if GMTIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "GMTIME_TEST\n\n";

	return 0;
}
#endif 