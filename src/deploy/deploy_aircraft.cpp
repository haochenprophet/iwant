#include "deploy_aircraft.h"
int Cdeploy_aircraft::my_init(void *p)
{
	this->name = "Cdeploy_aircraft";
	this->alias = "deploy_aircraft";
	return 0;
}

Cdeploy_aircraft::Cdeploy_aircraft()
{
	this->my_init();
}

Cdeploy_aircraft::~Cdeploy_aircraft()
{

}

#ifndef DEPLOY_AIRCRAFT_TEST
#define DEPLOY_AIRCRAFT_TEST 0//1
#endif

#if DEPLOY_AIRCRAFT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
