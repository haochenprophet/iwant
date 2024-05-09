#include "sensor_correct.h"
int Csensor_correct::my_init(void *p)
{
	this->name = "Csensor_correct";
	this->alias = "sensor_correct";
	return 0;
}

Csensor_correct::Csensor_correct()
{
	this->my_init();
}

Csensor_correct::~Csensor_correct()
{

}

#ifndef SENSOR_CORRECT_TEST
#define SENSOR_CORRECT_TEST 0//1
#endif

#if SENSOR_CORRECT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
