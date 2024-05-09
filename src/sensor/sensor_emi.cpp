#include "sensor_emi.h"
int Csensor_emi::my_init(void *p)
{
	this->name = "Csensor_emi";
	this->alias = "sensor_emi";
	return 0;
}

Csensor_emi::Csensor_emi()
{
	this->my_init();
}

Csensor_emi::~Csensor_emi()
{

}

#ifndef SENSOR_EMI_TEST
#define SENSOR_EMI_TEST 0//1
#endif

#if SENSOR_EMI_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
