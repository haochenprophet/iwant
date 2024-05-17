#include "deploy_source.h"
int Cdeploy_source::my_init(void *p)
{
	this->name = "Cdeploy_source";
	this->alias = "deploy_source";
	return 0;
}

Cdeploy_source::Cdeploy_source()
{
	this->my_init();
}

Cdeploy_source::~Cdeploy_source()
{

}

#ifndef DEPLOY_SOURCE_TEST
#define DEPLOY_SOURCE_TEST 0//1
#endif

#if DEPLOY_SOURCE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
