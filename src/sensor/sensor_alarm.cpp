#include "sensor_alarm.h"
int Csensor_alarm::my_init(void *p)
{
	this->name = "Csensor_alarm";
	this->alias = "sensor_alarm";
	return 0;
}

Csensor_alarm::Csensor_alarm()
{
	this->my_init();
}

Csensor_alarm::~Csensor_alarm()
{

}

#ifndef SENSOR_ALARM_TEST
#define SENSOR_ALARM_TEST 0//1
#endif

#if SENSOR_ALARM_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
