#include "sensor_repair.h"
int Csensor_repair::my_init(void *p)
{
	this->name = "Csensor_repair";
	this->alias = "sensor_repair";
	return 0;
}

Csensor_repair::Csensor_repair()
{
	this->my_init();
}

Csensor_repair::~Csensor_repair()
{

}

#ifndef SENSOR_REPAIR_TEST
#define SENSOR_REPAIR_TEST 0//1
#endif

#if SENSOR_REPAIR_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
