#include "deploy_gun.h"
int Cdeploy_gun::my_init(void *p)
{
	this->name = "Cdeploy_gun";
	this->alias = "deploy_gun";
	return 0;
}

Cdeploy_gun::Cdeploy_gun()
{
	this->my_init();
}

Cdeploy_gun::~Cdeploy_gun()
{

}

#ifndef DEPLOY_GUN_TEST
#define DEPLOY_GUN_TEST 0//1
#endif

#if DEPLOY_GUN_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
