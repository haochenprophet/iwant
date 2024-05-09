#include "sensor_angle_pitch.h"
int Csensor_angle_pitch::my_init(void *p)
{
	this->name = "Csensor_angle_pitch";
	this->alias = "sensor_angle_pitch";
	return 0;
}

Csensor_angle_pitch::Csensor_angle_pitch()
{
	this->my_init();
}

Csensor_angle_pitch::~Csensor_angle_pitch()
{

}

#ifndef SENSOR_ANGLE_PITCH_TEST
#define SENSOR_ANGLE_PITCH_TEST 0//1
#endif

#if SENSOR_ANGLE_PITCH_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
