#include "spaceport_device.h"
int Cspaceport_device::my_init(void *p)
{
	this->name = "Cspaceport_device";
	this->alias = "spaceport_device";
	return 0;
}

Cspaceport_device::Cspaceport_device()
{
	this->my_init();
}

Cspaceport_device::~Cspaceport_device()
{

}

#ifndef SPACEPORT_DEVICE_TEST
#define SPACEPORT_DEVICE_TEST 0//1
#endif

#if SPACEPORT_DEVICE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
