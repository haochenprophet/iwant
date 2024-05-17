#include "deploy.h"
int Cdeploy::my_init(void *p)
{
	this->name = "Cdeploy";
	this->alias = "deploy";
	return 0;
}

Cdeploy::Cdeploy()
{
	this->my_init();
}

Cdeploy::~Cdeploy()
{

}

#ifndef DEPLOY_TEST
#define DEPLOY_TEST 0//1
#endif

#if DEPLOY_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
