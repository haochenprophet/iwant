#include "car_ultrasonic_radar.h"
int Ccar_ultrasonic_radar::my_init(void *p)
{
	this->name = "Ccar_ultrasonic_radar";
	this->alias = "car_ultrasonic_radar";
	return 0;
}

Ccar_ultrasonic_radar::Ccar_ultrasonic_radar()
{
	this->my_init();
}

Ccar_ultrasonic_radar::~Ccar_ultrasonic_radar()
{

}

#ifndef CAR_ULTRASONIC_RADAR_TEST
#define CAR_ULTRASONIC_RADAR_TEST 0//1
#endif

#if CAR_ULTRASONIC_RADAR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
