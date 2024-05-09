#include "sensor_communication.h"
int Csensor_communication::my_init(void *p)
{
	this->name = "Csensor_communication";
	this->alias = "sensor_communication";
	return 0;
}

Csensor_communication::Csensor_communication()
{
	this->my_init();
}

Csensor_communication::~Csensor_communication()
{

}

#ifndef SENSOR_COMMUNICATION_TEST
#define SENSOR_COMMUNICATION_TEST 0//1
#endif

#if SENSOR_COMMUNICATION_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
