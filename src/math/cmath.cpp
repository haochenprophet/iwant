#include "cmath.h"
int Ccmath::my_init(void *p)
{
	this->name = "Ccmath";
	this->alias = "cmath";
	return 0;
}

Ccmath::Ccmath()
{
	this->my_init();
}

Ccmath::~Ccmath()
{

}

#ifndef CMATH_TEST
#define CMATH_TEST 0//1
#endif

#if CMATH_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "CMATH_TEST\n\n";

	return 0;
}
#endif 