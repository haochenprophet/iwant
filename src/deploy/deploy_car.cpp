#include "deploy_car.h"
int Cdeploy_car::my_init(void *p)
{
	this->name = "Cdeploy_car";
	this->alias = "deploy_car";
	return 0;
}

Cdeploy_car::Cdeploy_car()
{
	this->my_init();
}

Cdeploy_car::~Cdeploy_car()
{

}

#ifndef DEPLOY_CAR_TEST
#define DEPLOY_CAR_TEST 0//1
#endif

#if DEPLOY_CAR_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
