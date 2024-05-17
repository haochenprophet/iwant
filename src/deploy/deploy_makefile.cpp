#include "deploy_makefile.h"
int Cdeploy_makefile::my_init(void *p)
{
	this->name = "Cdeploy_makefile";
	this->alias = "deploy_makefile";
	return 0;
}

Cdeploy_makefile::Cdeploy_makefile()
{
	this->my_init();
}

Cdeploy_makefile::~Cdeploy_makefile()
{

}

#ifndef DEPLOY_MAKEFILE_TEST
#define DEPLOY_MAKEFILE_TEST 0//1
#endif

#if DEPLOY_MAKEFILE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
