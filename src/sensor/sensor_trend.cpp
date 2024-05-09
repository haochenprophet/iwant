#include "sensor_trend.h"
int Csensor_trend::my_init(void *p)
{
	this->name = "Csensor_trend";
	this->alias = "sensor_trend";
	return 0;
}

Csensor_trend::Csensor_trend()
{
	this->my_init();
}

Csensor_trend::~Csensor_trend()
{

}

#ifndef SENSOR_TREND_TEST
#define SENSOR_TREND_TEST 0//1
#endif

#if SENSOR_TREND_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
