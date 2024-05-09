#include "sensor_input.h"
int Csensor_input::my_init(void *p)
{
	this->name = "Csensor_input";
	this->alias = "sensor_input";
	return 0;
}

Csensor_input::Csensor_input()
{
	this->my_init();
}

Csensor_input::~Csensor_input()
{

}

#ifndef SENSOR_INPUT_TEST
#define SENSOR_INPUT_TEST 0//1
#endif

#if SENSOR_INPUT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
