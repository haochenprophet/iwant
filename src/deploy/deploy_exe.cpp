#include "deploy_exe.h"
int Cdeploy_exe::my_init(void *p)
{
	this->name = "Cdeploy_exe";
	this->alias = "deploy_exe";
	return 0;
}

Cdeploy_exe::Cdeploy_exe()
{
	this->my_init();
}

Cdeploy_exe::~Cdeploy_exe()
{

}

#ifndef DEPLOY_EXE_TEST
#define DEPLOY_EXE_TEST 0//1
#endif

#if DEPLOY_EXE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
