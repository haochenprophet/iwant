#include "deploy_sys.h"
int Cdeploy_sys::my_init(void *p)
{
	this->name = "Cdeploy_sys";
	this->alias = "deploy_sys";
	return 0;
}

Cdeploy_sys::Cdeploy_sys()
{
	this->my_init();
}

Cdeploy_sys::~Cdeploy_sys()
{

}

#ifndef DEPLOY_SYS_TEST
#define DEPLOY_SYS_TEST 0//1
#endif

#if DEPLOY_SYS_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
