#include "sensor_alert.h"
int Csensor_alert::my_init(void *p)
{
	this->name = "Csensor_alert";
	this->alias = "sensor_alert";
	return 0;
}

Csensor_alert::Csensor_alert()
{
	this->my_init();
}

Csensor_alert::~Csensor_alert()
{

}

#ifndef SENSOR_ALERT_TEST
#define SENSOR_ALERT_TEST 0//1
#endif

#if SENSOR_ALERT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
