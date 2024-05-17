#include "deploy_ko.h"
int Cdeploy_ko::my_init(void *p)
{
	this->name = "Cdeploy_ko";
	this->alias = "deploy_ko";
	return 0;
}

Cdeploy_ko::Cdeploy_ko()
{
	this->my_init();
}

Cdeploy_ko::~Cdeploy_ko()
{

}

#ifndef DEPLOY_KO_TEST
#define DEPLOY_KO_TEST 0//1
#endif

#if DEPLOY_KO_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
