#include "satellite_refrigerator.h"
int Csatellite_refrigerator::my_init(void *p)
{
	this->name = "Csatellite_refrigerator";
	this->alias = "satellite_refrigerator";
	return 0;
}

Csatellite_refrigerator::Csatellite_refrigerator()
{
	this->my_init();
}

Csatellite_refrigerator::~Csatellite_refrigerator()
{

}

#ifndef SATELLITE_REFRIGERATOR_TEST
#define SATELLITE_REFRIGERATOR_TEST 0//1
#endif

#if SATELLITE_REFRIGERATOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
