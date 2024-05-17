#include "deploy_so.h"
int Cdeploy_so::my_init(void *p)
{
	this->name = "Cdeploy_so";
	this->alias = "deploy_so";
	return 0;
}

Cdeploy_so::Cdeploy_so()
{
	this->my_init();
}

Cdeploy_so::~Cdeploy_so()
{

}

#ifndef DEPLOY_SO_TEST
#define DEPLOY_SO_TEST 0//1
#endif

#if DEPLOY_SO_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
