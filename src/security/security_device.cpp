#include "security_device.h"
int Csecurity_device::my_init(void *p)
{
	this->name = "Csecurity_device";
	this->alias = "security_device";
	return 0;
}

Csecurity_device::Csecurity_device()
{
	this->my_init();
}

Csecurity_device::~Csecurity_device()
{

}

#ifndef SECURITY_DEVICE_TEST
#define SECURITY_DEVICE_TEST 0//1
#endif

#if SECURITY_DEVICE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
