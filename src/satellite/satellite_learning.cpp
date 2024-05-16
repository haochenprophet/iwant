#include "satellite_learning.h"
int Csatellite_learning::my_init(void *p)
{
	this->name = "Csatellite_learning";
	this->alias = "satellite_learning";
	return 0;
}

Csatellite_learning::Csatellite_learning()
{
	this->my_init();
}

Csatellite_learning::~Csatellite_learning()
{

}

#ifndef SATELLITE_LEARNING_TEST
#define SATELLITE_LEARNING_TEST 0//1
#endif

#if SATELLITE_LEARNING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
