#include "car_power_off.h"
int Ccar_power_off::my_init(void *p)
{
	this->name = "Ccar_power_off";
	this->alias = "car_power_off";
	return 0;
}

Ccar_power_off::Ccar_power_off()
{
	this->my_init();
}

Ccar_power_off::~Ccar_power_off()
{

}

#ifndef CAR_POWER_OFF_TEST
#define CAR_POWER_OFF_TEST 0//1
#endif

#if CAR_POWER_OFF_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
