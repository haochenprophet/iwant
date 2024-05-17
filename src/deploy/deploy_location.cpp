#include "deploy_location.h"
int Cdeploy_location::my_init(void *p)
{
	this->name = "Cdeploy_location";
	this->alias = "deploy_location";
	return 0;
}

Cdeploy_location::Cdeploy_location()
{
	this->my_init();
}

Cdeploy_location::~Cdeploy_location()
{

}

#ifndef DEPLOY_LOCATION_TEST
#define DEPLOY_LOCATION_TEST 0//1
#endif

#if DEPLOY_LOCATION_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
