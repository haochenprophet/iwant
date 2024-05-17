#include "deploy_code.h"
int Cdeploy_code::my_init(void *p)
{
	this->name = "Cdeploy_code";
	this->alias = "deploy_code";
	return 0;
}

Cdeploy_code::Cdeploy_code()
{
	this->my_init();
}

Cdeploy_code::~Cdeploy_code()
{

}

#ifndef DEPLOY_CODE_TEST
#define DEPLOY_CODE_TEST 0//1
#endif

#if DEPLOY_CODE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
