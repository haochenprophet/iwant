#include "sensor_synchronism.h"
int Csensor_synchronism::my_init(void *p)
{
	this->name = "Csensor_synchronism";
	this->alias = "sensor_synchronism";
	return 0;
}

Csensor_synchronism::Csensor_synchronism()
{
	this->my_init();
}

Csensor_synchronism::~Csensor_synchronism()
{

}

#ifndef SENSOR_SYNCHRONISM_TEST
#define SENSOR_SYNCHRONISM_TEST 0//1
#endif

#if SENSOR_SYNCHRONISM_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
