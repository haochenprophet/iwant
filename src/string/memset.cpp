#include "memset.h"
int Cmemset::my_init(void *p)
{
	this->name = "Cmemset";
	this->alias = "memset";
	return 0;
}

Cmemset::Cmemset()
{
	this->my_init();
}

Cmemset::~Cmemset()
{

}

#ifndef MEMSET_TEST
#define MEMSET_TEST 0//1
#endif

#if MEMSET_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "MEMSET_TEST\n\n";

	return 0;
}
#endif 