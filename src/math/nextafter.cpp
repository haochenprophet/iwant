#include "nextafter.h"
int Cnextafter::my_init(void *p)
{
	this->name = "Cnextafter";
	this->alias = "nextafter";
	return 0;
}

Cnextafter::Cnextafter()
{
	this->my_init();
}

Cnextafter::~Cnextafter()
{

}

double Cnextafter::nextafter_c(double x, double y)
{
	return nextafter( x, y);
}

float Cnextafter::nextafterf_c(float x, float y)
{
	return nextafterf(x, y);
}

long double Cnextafter::nextafterl_c(long double x, long double y)
{
	return nextafterl(x, y);
}

#ifndef NEXTAFTER_TEST
#define NEXTAFTER_TEST 0//1
#endif

#if NEXTAFTER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NEXTAFTER_TEST\n\n";

	return 0;
}
#endif 