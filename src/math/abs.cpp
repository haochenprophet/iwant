#include "abs.h"
int Cabs::my_init(void *p)
{
	this->name = "Cabs";
	this->alias = "abs";
	return 0;
}

Cabs::Cabs()
{
	this->my_init();
}

Cabs::~Cabs()
{

}

int Cabs::abs_c(int n)
{
	return abs(n);
}

double Cabs::abs_c(double x)
{
	return abs(x);
}

float Cabs::abs_c(float x)
{
	return abs(x);
}

long double Cabs::abs_c(long double x)
{
	return abs(x);
}

#ifndef ABS_TEST
#define ABS_TEST 0//1
#endif

#if ABS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ABS_TEST\n\n";

	return 0;
}
#endif 