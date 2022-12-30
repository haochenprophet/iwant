#include "fmax.h"
int Cfmax::my_init(void *p)
{
	this->name = "Cfmax";
	this->alias = "fmax";
	return 0;
}

Cfmax::Cfmax()
{
	this->my_init();
}

Cfmax::~Cfmax()
{

}
double Cfmax::fmax_c(double x, double y)
{
	return fmax( x, y);
}
float Cfmax::fmaxf_c(float x, float y)
{
	return fmaxf (x, y);
}
long double Cfmax::fmaxl_c(long double x, long double y)
{
	return fmaxl(x, y);
}
#ifndef FMAX_TEST
#define FMAX_TEST 0//1
#endif

#if FMAX_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FMAX_TEST\n\n";

	return 0;
}
#endif 