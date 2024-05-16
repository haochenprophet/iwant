#include "radar_power.h"
int Cradar_power::my_init(void *p)
{
	this->name = "Cradar_power";
	this->alias = "radar_power";
	return 0;
}

Cradar_power::Cradar_power()
{
	this->my_init();
}

Cradar_power::~Cradar_power()
{

}

#ifndef RADAR_POWER_TEST
#define RADAR_POWER_TEST 0//1
#endif

#if RADAR_POWER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
