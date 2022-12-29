#include "atoll.h"
int Catoll::my_init(void *p)
{
	this->name = "Catoll";
	this->alias = "atoll";
	return 0;
}

Catoll::Catoll()
{
	this->my_init();
}

Catoll::~Catoll()
{

}

long long int Catoll::atoll_c(const char* str)
{
	return atoll(str);
}

#ifndef ATOLL_TEST
#define ATOLL_TEST 0//1
#endif

#if ATOLL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ATOLL_TEST\n\n";

	return 0;
}
#endif 