#include "strncpy.h"
int Cstrncpy::my_init(void *p)
{
	this->name = "Cstrncpy";
	this->alias = "strncpy";
	return 0;
}

Cstrncpy::Cstrncpy()
{
	this->my_init();
}

Cstrncpy::~Cstrncpy()
{

}

#ifndef STRNCPY_TEST
#define STRNCPY_TEST 0//1
#endif

#if STRNCPY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRNCPY_TEST\n\n";

	return 0;
}
#endif 