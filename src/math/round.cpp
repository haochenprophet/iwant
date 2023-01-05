#include "round.h"
int Cround::my_init(void *p)
{
	this->name = "Cround";
	this->alias = "round";
	return 0;
}

Cround::Cround()
{
	this->my_init();
}

Cround::~Cround()
{

}

double Cround::round_c(double x)
{
	return round(x);
}
float Cround::roundf_c(float x)
{
	return roundf(x);
}
long double Cround::roundl_c(long double x)
{
	return roundl(x);
}
#ifndef ROUND_TEST
#define ROUND_TEST 0//1
#endif

#if ROUND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ROUND_TEST\n\n";

	return 0;
}
#endif 