#include "satellite_environment.h"
int Csatellite_environment::my_init(void *p)
{
	this->name = "Csatellite_environment";
	this->alias = "satellite_environment";
	return 0;
}

Csatellite_environment::Csatellite_environment()
{
	this->my_init();
}

Csatellite_environment::~Csatellite_environment()
{

}

#ifndef SATELLITE_ENVIRONMENT_TEST
#define SATELLITE_ENVIRONMENT_TEST 0//1
#endif

#if SATELLITE_ENVIRONMENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
