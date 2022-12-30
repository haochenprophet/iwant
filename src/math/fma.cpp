#include "fma.h"
int Cfma::my_init(void *p)
{
	this->name = "Cfma";
	this->alias = "fma";
	return 0;
}

Cfma::Cfma()
{
	this->my_init();
}

Cfma::~Cfma()
{

}

double Cfma::fma_c(double x, double y, double z)
{
	return fma( x,  y,  z);
}

float Cfma::fmaf_c(float x, float y, float z)
{
	return fmaf(x, y, z);
}

long double Cfma::fmal_c(long double x, long double y, long double z)
{
	return fmal(x, y, z);
}

#ifndef FMA_TEST
#define FMA_TEST 0//1
#endif

#if FMA_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FMA_TEST\n\n";

	return 0;
}
#endif 