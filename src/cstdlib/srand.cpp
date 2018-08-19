#include "srand.h"
int Csrand::my_init(void *p)
{
	this->name = "Csrand";
	this->alias = "srand";
	return 0;
}

Csrand::Csrand()
{
	this->my_init();
}

Csrand::~Csrand()
{

}

#ifndef SRAND_TEST
#define SRAND_TEST 0//1
#endif

#if SRAND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SRAND_TEST\n\n";

	return 0;
}
#endif 