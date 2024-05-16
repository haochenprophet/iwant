#include "car_hardware.h"
int Ccar_hardware::my_init(void *p)
{
	this->name = "Ccar_hardware";
	this->alias = "car_hardware";
	return 0;
}

Ccar_hardware::Ccar_hardware()
{
	this->my_init();
}

Ccar_hardware::~Ccar_hardware()
{

}

#ifndef CAR_HARDWARE_TEST
#define CAR_HARDWARE_TEST 0//1
#endif

#if CAR_HARDWARE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
