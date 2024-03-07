#include "car_power_on.h"
int Ccar_power_on::my_init(void *p)
{
	this->name = "Ccar_power_on";
	this->alias = "car_power_on";
	return 0;
}

Ccar_power_on::Ccar_power_on()
{
	this->my_init();
}

Ccar_power_on::~Ccar_power_on()
{

}

#ifndef CAR_POWER_ON_TEST
#define CAR_POWER_ON_TEST 0//1
#endif

#if CAR_POWER_ON_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
