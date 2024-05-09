#include "sensor_ouput.h"
int Csensor_ouput::my_init(void *p)
{
	this->name = "Csensor_ouput";
	this->alias = "sensor_ouput";
	return 0;
}

Csensor_ouput::Csensor_ouput()
{
	this->my_init();
}

Csensor_ouput::~Csensor_ouput()
{

}

#ifndef SENSOR_OUPUT_TEST
#define SENSOR_OUPUT_TEST 0//1
#endif

#if SENSOR_OUPUT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
