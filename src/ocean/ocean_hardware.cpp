#include "ocean_hardware.h"
int Cocean_hardware::my_init(void *p)
{
	this->name = "Cocean_hardware";
	this->alias = "ocean_hardware";
	return 0;
}

Cocean_hardware::Cocean_hardware()
{
	this->my_init();
}

Cocean_hardware::~Cocean_hardware()
{

}

#ifndef OCEAN_HARDWARE_TEST
#define OCEAN_HARDWARE_TEST 0//1
#endif

#if OCEAN_HARDWARE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
