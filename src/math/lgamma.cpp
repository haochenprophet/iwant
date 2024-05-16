#include "lgamma.h"
int Clgamma::my_init(void *p)
{
	this->name = "Clgamma";
	this->alias = "lgamma";
	return 0;
}

Clgamma::Clgamma()
{
	this->my_init();
}

Clgamma::~Clgamma()
{

}

double Clgamma::lgamma_c(double x)
{
	return lgamma(x);
}

float Clgamma::lgammaf_c(float x)
{
	return lgammaf(x);
}

long double Clgamma::lgammal_c(long double x)
{
	return lgammal(x);
}

#ifndef LGAMMA_TEST
#define LGAMMA_TEST 0//1
#endif

#if LGAMMA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "LGAMMA_TEST\n\n";

	return 0;
}
#endif 