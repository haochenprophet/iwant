#include "sensor_read.h"
int Csensor_read::my_init(void *p)
{
	this->name = "Csensor_read";
	this->alias = "sensor_read";
	return 0;
}

Csensor_read::Csensor_read()
{
	this->my_init();
}

Csensor_read::~Csensor_read()
{

}

#ifndef SENSOR_READ_TEST
#define SENSOR_READ_TEST 0//1
#endif

#if SENSOR_READ_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
