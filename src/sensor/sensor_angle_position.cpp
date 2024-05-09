#include "sensor_angle_position.h"
int Csensor_angle_position::my_init(void *p)
{
	this->name = "Csensor_angle_position";
	this->alias = "sensor_angle_position";
	return 0;
}

Csensor_angle_position::Csensor_angle_position()
{
	this->my_init();
}

Csensor_angle_position::~Csensor_angle_position()
{

}

#ifndef SENSOR_ANGLE_POSITION_TEST
#define SENSOR_ANGLE_POSITION_TEST 0//1
#endif

#if SENSOR_ANGLE_POSITION_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
