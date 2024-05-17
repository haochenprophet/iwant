#include "deploy_bin.h"
int Cdeploy_bin::my_init(void *p)
{
	this->name = "Cdeploy_bin";
	this->alias = "deploy_bin";
	return 0;
}

Cdeploy_bin::Cdeploy_bin()
{
	this->my_init();
}

Cdeploy_bin::~Cdeploy_bin()
{

}

#ifndef DEPLOY_BIN_TEST
#define DEPLOY_BIN_TEST 0//1
#endif

#if DEPLOY_BIN_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
