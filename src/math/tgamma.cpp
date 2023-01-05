#include "tgamma.h"
int Ctgamma::my_init(void *p)
{
	this->name = "Ctgamma";
	this->alias = "tgamma";
	return 0;
}

Ctgamma::Ctgamma()
{
	this->my_init();
}

Ctgamma::~Ctgamma()
{

}
double Ctgamma::tgamma_c(double x)
{
	return tgamma( x);
}
float Ctgamma::tgammaf_c(float x)
{
	return tgammaf(x);
}
long double Ctgamma::tgammal_c(long double x)
{
	return tgammal(x);
}

#ifndef TGAMMA_TEST
#define TGAMMA_TEST 0//1
#endif

#if TGAMMA_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "TGAMMA_TEST\n\n";

	return 0;
}
#endif 