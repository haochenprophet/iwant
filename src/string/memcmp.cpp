#include "memcmp.h"
int Cmemcmp::my_init(void *p)
{
	this->name = "Cmemcmp";
	this->alias = "memcmp";
	return 0;
}

Cmemcmp::Cmemcmp()
{
	this->my_init();
}

Cmemcmp::~Cmemcmp()
{

}

#ifndef MEMCMP_TEST
#define MEMCMP_TEST 0//1
#endif

#if MEMCMP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MEMCMP_TEST\n\n";

	return 0;
}
#endif 