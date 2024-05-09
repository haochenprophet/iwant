#include "sensor_write.h"
int Csensor_write::my_init(void *p)
{
	this->name = "Csensor_write";
	this->alias = "sensor_write";
	return 0;
}

Csensor_write::Csensor_write()
{
	this->my_init();
}

Csensor_write::~Csensor_write()
{

}

#ifndef SENSOR_WRITE_TEST
#define SENSOR_WRITE_TEST 0//1
#endif

#if SENSOR_WRITE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
