#include "memcpy.h"
int Cmemcpy::my_init(void *p)
{
	this->name = "Cmemcpy";
	this->alias = "memcpy";
	return 0;
}

Cmemcpy::Cmemcpy()
{
	this->my_init();
}

Cmemcpy::~Cmemcpy()
{

}

#ifndef MEMCPY_TEST
#define MEMCPY_TEST 0//1
#endif

#if MEMCPY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MEMCPY_TEST\n\n";

	return 0;
}
#endif 