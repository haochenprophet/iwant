#include "sensor_radii.h"
int Csensor_radii::my_init(void *p)
{
	this->name = "Csensor_radii";
	this->alias = "sensor_radii";
	return 0;
}

Csensor_radii::Csensor_radii()
{
	this->my_init();
}

Csensor_radii::~Csensor_radii()
{

}

#ifndef SENSOR_RADII_TEST
#define SENSOR_RADII_TEST 0//1
#endif

#if SENSOR_RADII_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
