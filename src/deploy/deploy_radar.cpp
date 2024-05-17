#include "deploy_radar.h"
int Cdeploy_radar::my_init(void *p)
{
	this->name = "Cdeploy_radar";
	this->alias = "deploy_radar";
	return 0;
}

Cdeploy_radar::Cdeploy_radar()
{
	this->my_init();
}

Cdeploy_radar::~Cdeploy_radar()
{

}

#ifndef DEPLOY_RADAR_TEST
#define DEPLOY_RADAR_TEST 0//1
#endif

#if DEPLOY_RADAR_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
