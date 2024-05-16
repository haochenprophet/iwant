#include "scalbn.h"
int Cscalbn::my_init(void *p)
{
	this->name = "Cscalbn";
	this->alias = "scalbn";
	return 0;
}

Cscalbn::Cscalbn()
{
	this->my_init();
}

Cscalbn::~Cscalbn()
{

}

double Cscalbn::scalbn_c(double x, int n)
{
	return scalbn( x,  n);
}

float Cscalbn::scalbnf_c(float x, int n)
{
	return scalbnf(x, n);
}

long double Cscalbn::scalbnl_c(long double x, int n)
{
	return scalbnl(x, n);
}

#ifndef SCALBN_TEST
#define SCALBN_TEST 0//1
#endif

#if SCALBN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SCALBN_TEST\n\n";

	return 0;
}
#endif 