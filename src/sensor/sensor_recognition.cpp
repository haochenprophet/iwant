#include "sensor_recognition.h"
int Csensor_recognition::my_init(void *p)
{
	this->name = "Csensor_recognition";
	this->alias = "sensor_recognition";
	return 0;
}

Csensor_recognition::Csensor_recognition()
{
	this->my_init();
}

Csensor_recognition::~Csensor_recognition()
{

}

#ifndef SENSOR_RECOGNITION_TEST
#define SENSOR_RECOGNITION_TEST 0//1
#endif

#if SENSOR_RECOGNITION_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
