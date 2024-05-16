#include "expm1.h"
int Cexpm1::my_init(void *p)
{
	this->name = "Cexpm1";
	this->alias = "expm1";
	return 0;
}

Cexpm1::Cexpm1()
{
	this->my_init();
}

Cexpm1::~Cexpm1()
{

}
double Cexpm1::expm1_c(double x)
{
	return expm1(x);
}
float Cexpm1::expm1f_c(float x)
{
	return expm1f(x);
}
long double Cexpm1::expm1l_c(long double x)
{
	return expm1l(x);
}
#ifndef EXPM1_TEST
#define EXPM1_TEST 0//1
#endif

#if EXPM1_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "EXPM1_TEST\n\n";

	return 0;
}
#endif 