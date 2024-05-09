#include "sensor_close.h"
int Csensor_close::my_init(void *p)
{
	this->name = "Csensor_close";
	this->alias = "sensor_close";
	return 0;
}

Csensor_close::Csensor_close()
{
	this->my_init();
}

Csensor_close::~Csensor_close()
{

}

#ifndef SENSOR_CLOSE_TEST
#define SENSOR_CLOSE_TEST 0//1
#endif

#if SENSOR_CLOSE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
