#include "device.h"
int Cdevice::my_init(void *p)
{
	this->name = "Cdevice";
	this->alias = "device";
	return 0;
}

Cdevice::Cdevice()
{
	this->my_init();
}

Cdevice::~Cdevice()
{

}

#ifndef DEVICE_TEST
#define DEVICE_TEST 0//1
#endif

#if DEVICE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "DEVICE_TEST\n\n";

	return 0;
}
#endif 