#include "deploy_missile.h"
int Cdeploy_missile::my_init(void *p)
{
	this->name = "Cdeploy_missile";
	this->alias = "deploy_missile";
	return 0;
}

Cdeploy_missile::Cdeploy_missile()
{
	this->my_init();
}

Cdeploy_missile::~Cdeploy_missile()
{

}

#ifndef DEPLOY_MISSILE_TEST
#define DEPLOY_MISSILE_TEST 0//1
#endif

#if DEPLOY_MISSILE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
