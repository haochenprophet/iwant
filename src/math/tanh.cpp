#include "tanh.h"
int Ctanh::my_init(void *p)
{
	this->name = "Ctanh";
	this->alias = "tanh";
	return 0;
}

Ctanh::Ctanh()
{
	this->my_init();
}

Ctanh::~Ctanh()
{

}

double Ctanh::tanh_c(double x)
{
	return tanh(x);
}
#ifndef TANH_TEST
#define TANH_TEST 0//1
#endif

#if TANH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TANH_TEST\n\n";

	return 0;
}
#endif 