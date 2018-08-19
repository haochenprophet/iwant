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

#ifndef NEARBYINT_TEST
#define NEARBYINT_TEST 0//1
#endif

#if NEARBYINT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "NEARBYINT_TEST\n\n";

	return 0;
}
#endif 