#include "car_battery.h"
int Ccar_battery::my_init(void *p)
{
	this->name = "Ccar_battery";
	this->alias = "car_battery";
	return 0;
}

Ccar_battery::Ccar_battery()
{
	this->my_init();
}

Ccar_battery::~Ccar_battery()
{

}

#ifndef CAR_BATTERY_TEST
#define CAR_BATTERY_TEST 0//1
#endif

#if CAR_BATTERY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
