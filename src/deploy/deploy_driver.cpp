#include "deploy_driver.h"
int Cdeploy_driver::my_init(void *p)
{
	this->name = "Cdeploy_driver";
	this->alias = "deploy_driver";
	return 0;
}

Cdeploy_driver::Cdeploy_driver()
{
	this->my_init();
}

Cdeploy_driver::~Cdeploy_driver()
{

}

#ifndef DEPLOY_DRIVER_TEST
#define DEPLOY_DRIVER_TEST 0//1
#endif

#if DEPLOY_DRIVER_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
