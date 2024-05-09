#include "sensor_normal.h"
int Csensor_normal::my_init(void *p)
{
	this->name = "Csensor_normal";
	this->alias = "sensor_normal";
	return 0;
}

Csensor_normal::Csensor_normal()
{
	this->my_init();
}

Csensor_normal::~Csensor_normal()
{

}

#ifndef SENSOR_NORMAL_TEST
#define SENSOR_NORMAL_TEST 0//1
#endif

#if SENSOR_NORMAL_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
