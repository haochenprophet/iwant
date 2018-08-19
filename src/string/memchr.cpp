#include "memchr.h"
int Cmemchr::my_init(void *p)
{
	this->name = "Cmemchr";
	this->alias = "memchr";
	return 0;
}

Cmemchr::Cmemchr()
{
	this->my_init();
}

Cmemchr::~Cmemchr()
{

}

#ifndef MEMCHR_TEST
#define MEMCHR_TEST 0//1
#endif

#if MEMCHR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MEMCHR_TEST\n\n";

	return 0;
}
#endif 