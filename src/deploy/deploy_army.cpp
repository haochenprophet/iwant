#include "deploy_army.h"
int Cdeploy_army::my_init(void *p)
{
	this->name = "Cdeploy_army";
	this->alias = "deploy_army";
	return 0;
}

Cdeploy_army::Cdeploy_army()
{
	this->my_init();
}

Cdeploy_army::~Cdeploy_army()
{

}

#ifndef DEPLOY_ARMY_TEST
#define DEPLOY_ARMY_TEST 0//1
#endif

#if DEPLOY_ARMY_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
