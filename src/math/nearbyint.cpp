#include "nearbyint.h"
int Cnearbyint::my_init(void *p)
{
	this->name = "Cnearbyint";
	this->alias = "nearbyint";
	return 0;
}

Cnearbyint::Cnearbyint()
{
	this->my_init();
}

Cnearbyint::~Cnearbyint()
{

}

double Cnearbyint::nearbyint_c(double x)
{
	return nearbyint( x);
}

float Cnearbyint::nearbyintf_c(float x)
{
	return nearbyintf(x);
}

long double Cnearbyint::nearbyintl_c(long double x)
{
	return nearbyintl(x);
}

#ifndef NEARBYINT_TEST
#define NEARBYINT_TEST 0//1
#endif

#if NEARBYINT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NEARBYINT_TEST\n\n";

	return 0;
}
#endif 