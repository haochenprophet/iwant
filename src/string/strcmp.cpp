#include "strcmp.h"
int Cstrcmp::my_init(void *p)
{
	this->name = "Cstrcmp";
	this->alias = "strcmp";
	return 0;
}

Cstrcmp::Cstrcmp()
{
	this->my_init();
}

Cstrcmp::~Cstrcmp()
{

}

#ifndef STRCMP_TEST
#define STRCMP_TEST 0//1
#endif

#if STRCMP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRCMP_TEST\n\n";

	return 0;
}
#endif 