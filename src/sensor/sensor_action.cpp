#include "sensor_action.h"
int Csensor_action::my_init(void *p)
{
	this->name = "Csensor_action";
	this->alias = "sensor_action";
	return 0;
}

Csensor_action::Csensor_action()
{
	this->my_init();
}

Csensor_action::~Csensor_action()
{

}

#ifndef SENSOR_ACTION_TEST
#define SENSOR_ACTION_TEST 0//1
#endif

#if SENSOR_ACTION_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
