#include "sensor_analysis.h"
int Csensor_analysis::my_init(void *p)
{
	this->name = "Csensor_analysis";
	this->alias = "sensor_analysis";
	return 0;
}

Csensor_analysis::Csensor_analysis()
{
	this->my_init();
}

Csensor_analysis::~Csensor_analysis()
{

}

#ifndef SENSOR_ANALYSIS_TEST
#define SENSOR_ANALYSIS_TEST 0//1
#endif

#if SENSOR_ANALYSIS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
