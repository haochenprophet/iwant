#include "deploy_satellite.h"
int Cdeploy_satellite::my_init(void *p)
{
	this->name = "Cdeploy_satellite";
	this->alias = "deploy_satellite";
	return 0;
}

Cdeploy_satellite::Cdeploy_satellite()
{
	this->my_init();
}

Cdeploy_satellite::~Cdeploy_satellite()
{

}

#ifndef DEPLOY_SATELLITE_TEST
#define DEPLOY_SATELLITE_TEST 0//1
#endif

#if DEPLOY_SATELLITE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
