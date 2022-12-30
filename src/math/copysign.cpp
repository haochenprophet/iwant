#include "copysign.h"
int Ccopysign::my_init(void *p)
{
	this->name = "Ccopysign";
	this->alias = "copysign";
	return 0;
}

Ccopysign::Ccopysign()
{
	this->my_init();
}

Ccopysign::~Ccopysign()
{

}

double copysign_c(double x, double y)
{
	return copysign( x,y);
}

float copysignf_c(float x, float y)
{
	return copysignf(x, y);
}

long double copysignl_c(long double x, long double y)
{
	return copysignl(x, y);
}

#ifndef COPYSIGN_TEST
#define COPYSIGN_TEST 0//1
#endif

#if COPYSIGN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "COPYSIGN_TEST\n\n";

	return 0;
}
#endif 