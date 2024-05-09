#include "sensor_flow.h"
int Csensor_flow::my_init(void *p)
{
	this->name = "Csensor_flow";
	this->alias = "sensor_flow";
	return 0;
}

Csensor_flow::Csensor_flow()
{
	this->my_init();
}

Csensor_flow::~Csensor_flow()
{

}

#ifndef SENSOR_FLOW_TEST
#define SENSOR_FLOW_TEST 0//1
#endif

#if SENSOR_FLOW_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
