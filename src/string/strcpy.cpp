#include "strcpy.h"
int Cstrcpy::my_init(void *p)
{
	this->name = "Cstrcpy";
	this->alias = "strcpy";
	return 0;
}

Cstrcpy::Cstrcpy()
{
	this->my_init();
}

Cstrcpy::~Cstrcpy()
{

}

#ifndef STRCPY_TEST
#define STRCPY_TEST 0//1
#endif

#if STRCPY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRCPY_TEST\n\n";

	return 0;
}
#endif 