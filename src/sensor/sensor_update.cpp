#include "sensor_update.h"
int Csensor_update::my_init(void *p)
{
	this->name = "Csensor_update";
	this->alias = "sensor_update";
	return 0;
}

Csensor_update::Csensor_update()
{
	this->my_init();
}

Csensor_update::~Csensor_update()
{

}

#ifndef SENSOR_UPDATE_TEST
#define SENSOR_UPDATE_TEST 0//1
#endif

#if SENSOR_UPDATE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
