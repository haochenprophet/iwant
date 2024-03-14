#include "rocket_battery.h"
int Crocket_battery::my_init(void *p)
{
	this->name = "Crocket_battery";
	this->alias = "rocket_battery";
	return 0;
}

Crocket_battery::Crocket_battery()
{
	this->my_init();
}

Crocket_battery::~Crocket_battery()
{

}

#ifndef ROCKET_BATTERY_TEST
#define ROCKET_BATTERY_TEST 0//1
#endif

#if ROCKET_BATTERY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
