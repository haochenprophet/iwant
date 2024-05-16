#include "strerror.h"
int Cstrerror::my_init(void *p)
{
	this->name = "Cstrerror";
	this->alias = "strerror";
	return 0;
}

Cstrerror::Cstrerror()
{
	this->my_init();
}

Cstrerror::~Cstrerror()
{

}

#ifndef STRERROR_TEST
#define STRERROR_TEST 0//1
#endif

#if STRERROR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRERROR_TEST\n\n";

	return 0;
}
#endif 