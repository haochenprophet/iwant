#include "strtoll.h"
int Cstrtoll::my_init(void *p)
{
	this->name = "Cstrtoll";
	this->alias = "strtoll";
	return 0;
}

Cstrtoll::Cstrtoll()
{
	this->my_init();
}

Cstrtoll::~Cstrtoll()
{

}
long long int Cstrtoll::strtoll_c(const char* str, char** endptr, int base)
{
	return strtoll( str,  endptr,  base);
}
#ifndef STRTOLL_TEST
#define STRTOLL_TEST 0//1
#endif

#if STRTOLL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRTOLL_TEST\n\n";

	return 0;
}
#endif 