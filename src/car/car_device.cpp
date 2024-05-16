#include "car_device.h"
int Ccar_device::my_init(void *p)
{
	this->name = "Ccar_device";
	this->alias = "car_device";
	return 0;
}

Ccar_device::Ccar_device()
{
	this->my_init();
}

Ccar_device::~Ccar_device()
{

}

#ifndef CAR_DEVICE_TEST
#define CAR_DEVICE_TEST 0//1
#endif

#if CAR_DEVICE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
