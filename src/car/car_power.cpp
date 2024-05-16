#include "car_power.h"
int Ccar_power::my_init(void *p)
{
	this->name = "Ccar_power";
	this->alias = "car_power";
	return 0;
}

Ccar_power::Ccar_power()
{
	this->my_init();
}

Ccar_power::~Ccar_power()
{

}

#ifndef CAR_POWER_TEST
#define CAR_POWER_TEST 0//1
#endif

#if CAR_POWER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
