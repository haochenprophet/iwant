#include "satellite_motor.h"
int Csatellite_motor::my_init(void *p)
{
	this->name = "Csatellite_motor";
	this->alias = "satellite_motor";
	return 0;
}

Csatellite_motor::Csatellite_motor()
{
	this->my_init();
}

Csatellite_motor::~Csatellite_motor()
{

}

#ifndef SATELLITE_MOTOR_TEST
#define SATELLITE_MOTOR_TEST 0//1
#endif

#if SATELLITE_MOTOR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
