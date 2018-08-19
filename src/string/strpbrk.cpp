#include "strpbrk.h"
int Cstrpbrk::my_init(void *p)
{
	this->name = "Cstrpbrk";
	this->alias = "strpbrk";
	return 0;
}

Cstrpbrk::Cstrpbrk()
{
	this->my_init();
}

Cstrpbrk::~Cstrpbrk()
{

}

#ifndef STRPBRK_TEST
#define STRPBRK_TEST 0//1
#endif

#if STRPBRK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRPBRK_TEST\n\n";

	return 0;
}
#endif 