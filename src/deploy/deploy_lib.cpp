#include "deploy_lib.h"
int Cdeploy_lib::my_init(void *p)
{
	this->name = "Cdeploy_lib";
	this->alias = "deploy_lib";
	return 0;
}

Cdeploy_lib::Cdeploy_lib()
{
	this->my_init();
}

Cdeploy_lib::~Cdeploy_lib()
{

}

#ifndef DEPLOY_LIB_TEST
#define DEPLOY_LIB_TEST 0//1
#endif

#if DEPLOY_LIB_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
