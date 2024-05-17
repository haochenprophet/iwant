#include "deploy_manpower.h"
int Cdeploy_manpower::my_init(void *p)
{
	this->name = "Cdeploy_manpower";
	this->alias = "deploy_manpower";
	return 0;
}

Cdeploy_manpower::Cdeploy_manpower()
{
	this->my_init();
}

Cdeploy_manpower::~Cdeploy_manpower()
{

}

#ifndef DEPLOY_MANPOWER_TEST
#define DEPLOY_MANPOWER_TEST 0//1
#endif

#if DEPLOY_MANPOWER_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
