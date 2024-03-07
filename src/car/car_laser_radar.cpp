#include "car_laser_radar.h"
int Ccar_laser_radar::my_init(void *p)
{
	this->name = "Ccar_laser_radar";
	this->alias = "car_laser_radar";
	return 0;
}

Ccar_laser_radar::Ccar_laser_radar()
{
	this->my_init();
}

Ccar_laser_radar::~Ccar_laser_radar()
{

}

#ifndef CAR_LASER_RADAR_TEST
#define CAR_LASER_RADAR_TEST 0//1
#endif

#if CAR_LASER_RADAR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
