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
double Casinh::asinh_c(double x)
{
	return asinh(x);
}
float Casinh::asinhf_c(float x)
{
	return asinhf(x);
}

long double Casinh::asinhl_c(long double x)
{
	return asinhl(x);
}
#ifndef ASINH_TEST
#define ASINH_TEST 0//1
#endif

#if ASINH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ASINH_TEST\n\n";

	return 0;
}
#endif 