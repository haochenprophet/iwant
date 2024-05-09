#include "sensor_blood_sugar.h"
int Csensor_blood_sugar::my_init(void *p)
{
	this->name = "Csensor_blood_sugar";
	this->alias = "sensor_blood_sugar";
	return 0;
}

Csensor_blood_sugar::Csensor_blood_sugar()
{
	this->my_init();
}

Csensor_blood_sugar::~Csensor_blood_sugar()
{

}

#ifndef SENSOR_BLOOD_SUGAR_TEST
#define SENSOR_BLOOD_SUGAR_TEST 0//1
#endif

#if SENSOR_BLOOD_SUGAR_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
