#include "sensor_voltage.h"
int Csensor_voltage::my_init(void *p)
{
	this->name = "Csensor_voltage";
	this->alias = "sensor_voltage";
	return 0;
}

Csensor_voltage::Csensor_voltage()
{
	this->my_init();
}

Csensor_voltage::~Csensor_voltage()
{

}

#ifndef SENSOR_VOLTAGE_TEST
#define SENSOR_VOLTAGE_TEST 0//1
#endif

#if SENSOR_VOLTAGE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
