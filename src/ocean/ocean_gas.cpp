#include "ocean_gas.h"
int Cocean_gas::my_init(void *p)
{
	this->name = "Cocean_gas";
	this->alias = "ocean_gas";
	return 0;
}

Cocean_gas::Cocean_gas()
{
	this->my_init();
}

Cocean_gas::~Cocean_gas()
{

}

#ifndef OCEAN_GAS_TEST
#define OCEAN_GAS_TEST 0//1
#endif

#if OCEAN_GAS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
