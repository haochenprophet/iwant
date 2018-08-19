#include "asinh.h"
int Casinh::my_init(void *p)
{
	this->name = "Casinh";
	this->alias = "asinh";
	return 0;
}

Casinh::Casinh()
{
	this->my_init();
}

Casinh::~Casinh()
{

}

#ifndef ASINH_TEST
#define ASINH_TEST 0//1
#endif

#if ASINH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ASINH_TEST\n\n";

	return 0;
}
#endif 