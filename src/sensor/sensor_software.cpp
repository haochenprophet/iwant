#include "sensor_software.h"
int Csensor_software::my_init(void *p)
{
	this->name = "Csensor_software";
	this->alias = "sensor_software";
	return 0;
}

Csensor_software::Csensor_software()
{
	this->my_init();
}

Csensor_software::~Csensor_software()
{

}

#ifndef SENSOR_SOFTWARE_TEST
#define SENSOR_SOFTWARE_TEST 0//1
#endif

#if SENSOR_SOFTWARE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
