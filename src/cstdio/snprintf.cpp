#include "snprintf.h"
int Csnprintf::my_init(void *p)
{
	this->name = "Csnprintf";
	this->alias = "snprintf";
	return 0;
}

Csnprintf::Csnprintf()
{
	this->my_init();
}

Csnprintf::~Csnprintf()
{

}

#ifndef SNPRINTF_TEST
#define SNPRINTF_TEST 0//1
#endif

#if SNPRINTF_TEST
#include "../all_h_include.h"int main(int argc, char *argv[])
{
	std::cout << "SNPRINTF_TEST\n\n";

	return 0;
}
#endif 