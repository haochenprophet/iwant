#include "sensor_detecte.h"
int Csensor_detecte::my_init(void *p)
{
	this->name = "Csensor_detecte";
	this->alias = "sensor_detecte";
	return 0;
}

Csensor_detecte::Csensor_detecte()
{
	this->my_init();
}

Csensor_detecte::~Csensor_detecte()
{

}

#ifndef SENSOR_DETECTE_TEST
#define SENSOR_DETECTE_TEST 0//1
#endif

#if SENSOR_DETECTE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
