#include "home_device.h"
int Chome_device::my_init(void *p)
{
	this->name = "Chome_device";
	this->alias = "home_device";
	return 0;
}

Chome_device::Chome_device()
{
	this->my_init();
}

Chome_device::~Chome_device()
{

}

#ifndef HOME_DEVICE_TEST
#define HOME_DEVICE_TEST 0//1
#endif

#if HOME_DEVICE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
