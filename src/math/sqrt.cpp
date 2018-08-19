#include "sqrt.h"
int Csqrt::my_init(void *p)
{
	this->name = "Csqrt";
	this->alias = "sqrt";
	return 0;
}

Csqrt::Csqrt()
{
	this->my_init();
}

Csqrt::~Csqrt()
{

}

#ifndef SQRT_TEST
#define SQRT_TEST 0//1
#endif

#if SQRT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SQRT_TEST\n\n";

	return 0;
}
#endif 