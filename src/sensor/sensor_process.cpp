#include "sensor_process.h"
int Csensor_process::my_init(void *p)
{
	this->name = "Csensor_process";
	this->alias = "sensor_process";
	return 0;
}

Csensor_process::Csensor_process()
{
	this->my_init();
}

Csensor_process::~Csensor_process()
{

}

#ifndef SENSOR_PROCESS_TEST
#define SENSOR_PROCESS_TEST 0//1
#endif

#if SENSOR_PROCESS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
