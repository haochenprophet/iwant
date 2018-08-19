#include "strncmp.h"
int Cstrncmp::my_init(void *p)
{
	this->name = "Cstrncmp";
	this->alias = "strncmp";
	return 0;
}

Cstrncmp::Cstrncmp()
{
	this->my_init();
}

Cstrncmp::~Cstrncmp()
{

}

#ifndef STRNCMP_TEST
#define STRNCMP_TEST 0//1
#endif

#if STRNCMP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRNCMP_TEST\n\n";

	return 0;
}
#endif 