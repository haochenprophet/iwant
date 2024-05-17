#include "deploy_object.h"
int Cdeploy_object::my_init(void *p)
{
	this->name = "Cdeploy_object";
	this->alias = "deploy_object";
	return 0;
}

Cdeploy_object::Cdeploy_object()
{
	this->my_init();
}

Cdeploy_object::~Cdeploy_object()
{

}

#ifndef DEPLOY_OBJECT_TEST
#define DEPLOY_OBJECT_TEST 0//1
#endif

#if DEPLOY_OBJECT_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
