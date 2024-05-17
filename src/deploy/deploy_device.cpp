#include "deploy_device.h"
int Cdeploy_device::my_init(void *p)
{
	this->name = "Cdeploy_device";
	this->alias = "deploy_device";
	return 0;
}

Cdeploy_device::Cdeploy_device()
{
	this->my_init();
}

Cdeploy_device::~Cdeploy_device()
{

}

#ifndef DEPLOY_DEVICE_TEST
#define DEPLOY_DEVICE_TEST 0//1
#endif

#if DEPLOY_DEVICE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
