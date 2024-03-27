#include "ocean_voltage.h"
int Cocean_voltage::my_init(void *p)
{
	this->name = "Cocean_voltage";
	this->alias = "ocean_voltage";
	return 0;
}

Cocean_voltage::Cocean_voltage()
{
	this->my_init();
}

Cocean_voltage::~Cocean_voltage()
{

}

#ifndef OCEAN_VOLTAGE_TEST
#define OCEAN_VOLTAGE_TEST 0//1
#endif

#if OCEAN_VOLTAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
