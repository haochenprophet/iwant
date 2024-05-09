#include "sensor_meteorology.h"
int Csensor_meteorology::my_init(void *p)
{
	this->name = "Csensor_meteorology";
	this->alias = "sensor_meteorology";
	return 0;
}

Csensor_meteorology::Csensor_meteorology()
{
	this->my_init();
}

Csensor_meteorology::~Csensor_meteorology()
{

}

#ifndef SENSOR_METEOROLOGY_TEST
#define SENSOR_METEOROLOGY_TEST 0//1
#endif

#if SENSOR_METEOROLOGY_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
