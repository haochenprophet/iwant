#include "sensor_id.h"
int Csensor_id::my_init(void *p)
{
	this->name = "Csensor_id";
	this->alias = "sensor_id";
	return 0;
}

Csensor_id::Csensor_id()
{
	this->my_init();
}

Csensor_id::~Csensor_id()
{

}

#ifndef SENSOR_ID_TEST
#define SENSOR_ID_TEST 0//1
#endif

#if SENSOR_ID_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
