#include "fdim.h"
int Cfdim::my_init(void *p)
{
	this->name = "Cfdim";
	this->alias = "fdim";
	return 0;
}

Cfdim::Cfdim()
{
	this->my_init();
}

Cfdim::~Cfdim()
{

}

double Cfdim::fdim_c(double x, double y)
{
	return fdim( x,  y);
}
float Cfdim::fdimf_c(float x, float y)
{
	return fdimf(x, y);
}
long double Cfdim::fdiml_c(long double x, long double y)
{
	return fdiml(x, y);
}

#ifndef FDIM_TEST
#define FDIM_TEST 0//1
#endif

#if FDIM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FDIM_TEST\n\n";

	return 0;
}
#endif 