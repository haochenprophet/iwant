#include "deploy_dll.h"
int Cdeploy_dll::my_init(void *p)
{
	this->name = "Cdeploy_dll";
	this->alias = "deploy_dll";
	return 0;
}

Cdeploy_dll::Cdeploy_dll()
{
	this->my_init();
}

Cdeploy_dll::~Cdeploy_dll()
{

}

#ifndef DEPLOY_DLL_TEST
#define DEPLOY_DLL_TEST 0//1
#endif

#if DEPLOY_DLL_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
