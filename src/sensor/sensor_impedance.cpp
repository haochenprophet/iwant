#include "sensor_impedance.h"
int Csensor_impedance::my_init(void *p)
{
	this->name = "Csensor_impedance";
	this->alias = "sensor_impedance";
	return 0;
}

Csensor_impedance::Csensor_impedance()
{
	this->my_init();
}

Csensor_impedance::~Csensor_impedance()
{

}

#ifndef SENSOR_IMPEDANCE_TEST
#define SENSOR_IMPEDANCE_TEST 0//1
#endif

#if SENSOR_IMPEDANCE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
