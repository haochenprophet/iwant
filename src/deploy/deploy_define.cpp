#include "deploy_define.h"
int Cdeploy_define::my_init(void *p)
{
	this->name = "Cdeploy_define";
	this->alias = "deploy_define";
	return 0;
}

Cdeploy_define::Cdeploy_define()
{
	this->my_init();
}

Cdeploy_define::~Cdeploy_define()
{

}

#ifndef DEPLOY_DEFINE_TEST
#define DEPLOY_DEFINE_TEST 0//1
#endif

#if DEPLOY_DEFINE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
