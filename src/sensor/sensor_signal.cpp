#include "sensor_signal.h"
int Csensor_signal::my_init(void *p)
{
	this->name = "Csensor_signal";
	this->alias = "sensor_signal";
	return 0;
}

Csensor_signal::Csensor_signal()
{
	this->my_init();
}

Csensor_signal::~Csensor_signal()
{

}

#ifndef SENSOR_SIGNAL_TEST
#define SENSOR_SIGNAL_TEST 0//1
#endif

#if SENSOR_SIGNAL_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
