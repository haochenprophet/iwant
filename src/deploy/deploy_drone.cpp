#include "deploy_drone.h"
int Cdeploy_drone::my_init(void *p)
{
	this->name = "Cdeploy_drone";
	this->alias = "deploy_drone";
	return 0;
}

Cdeploy_drone::Cdeploy_drone()
{
	this->my_init();
}

Cdeploy_drone::~Cdeploy_drone()
{

}

#ifndef DEPLOY_DRONE_TEST
#define DEPLOY_DRONE_TEST 0//1
#endif

#if DEPLOY_DRONE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
