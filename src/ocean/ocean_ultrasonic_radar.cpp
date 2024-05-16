#include "ocean_ultrasonic_radar.h"
int Cocean_ultrasonic_radar::my_init(void *p)
{
	this->name = "Cocean_ultrasonic_radar";
	this->alias = "ocean_ultrasonic_radar";
	return 0;
}

Cocean_ultrasonic_radar::Cocean_ultrasonic_radar()
{
	this->my_init();
}

Cocean_ultrasonic_radar::~Cocean_ultrasonic_radar()
{

}

#ifndef OCEAN_ULTRASONIC_RADAR_TEST
#define OCEAN_ULTRASONIC_RADAR_TEST 0//1
#endif

#if OCEAN_ULTRASONIC_RADAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
