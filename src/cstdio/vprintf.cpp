#include "vprintf.h"
int Cvprintf::my_init(void *p)
{
	this->name = "Cvprintf";
	this->alias = "vprintf";
	return 0;
}

Cvprintf::Cvprintf()
{
	this->my_init();
}

Cvprintf::~Cvprintf()
{

}

#ifndef VPRINTF_TEST
#define VPRINTF_TEST 0//1
#endif

#if VPRINTF_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "VPRINTF_TEST\n\n";

	return 0;
}
#endif 