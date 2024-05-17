#include "deploy_warship.h"
int Cdeploy_warship::my_init(void *p)
{
	this->name = "Cdeploy_warship";
	this->alias = "deploy_warship";
	return 0;
}

Cdeploy_warship::Cdeploy_warship()
{
	this->my_init();
}

Cdeploy_warship::~Cdeploy_warship()
{

}

#ifndef DEPLOY_WARSHIP_TEST
#define DEPLOY_WARSHIP_TEST 0//1
#endif

#if DEPLOY_WARSHIP_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
