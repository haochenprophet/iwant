#include "sensor_rpm.h"
int Csensor_rpm::my_init(void *p)
{
	this->name = "Csensor_rpm";
	this->alias = "sensor_rpm";
	return 0;
}

Csensor_rpm::Csensor_rpm()
{
	this->my_init();
}

Csensor_rpm::~Csensor_rpm()
{

}

#ifndef SENSOR_RPM_TEST
#define SENSOR_RPM_TEST 0//1
#endif

#if SENSOR_RPM_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
