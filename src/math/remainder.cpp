#include "remainder.h"
int Cremainder::my_init(void *p)
{
	this->name = "Cremainder";
	this->alias = "remainder";
	return 0;
}

Cremainder::Cremainder()
{
	this->my_init();
}

Cremainder::~Cremainder()
{

}

double Cremainder::remainder_c(double numer, double denom)
{
	return remainder( numer, denom);
}

float Cremainder::remainderf_c(float numer, float denom)
{
	return remainderf(numer, denom);
}

long double Cremainder::remainderl_c(long double numer, long double denom)
{
	return remainderl(numer, denom);
}


#ifndef REMAINDER_TEST
#define REMAINDER_TEST 0//1
#endif

#if REMAINDER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "REMAINDER_TEST\n\n";

	return 0;
}
#endif 