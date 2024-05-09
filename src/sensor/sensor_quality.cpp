#include "sensor_quality.h"
int Csensor_quality::my_init(void *p)
{
	this->name = "Csensor_quality";
	this->alias = "sensor_quality";
	return 0;
}

Csensor_quality::Csensor_quality()
{
	this->my_init();
}

Csensor_quality::~Csensor_quality()
{

}

#ifndef SENSOR_QUALITY_TEST
#define SENSOR_QUALITY_TEST 0//1
#endif

#if SENSOR_QUALITY_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
