#include "deploy_list.h"
int Cdeploy_list::my_init(void *p)
{
	this->name = "Cdeploy_list";
	this->alias = "deploy_list";
	return 0;
}

Cdeploy_list::Cdeploy_list()
{
	this->my_init();
}

Cdeploy_list::~Cdeploy_list()
{

}

#ifndef DEPLOY_LIST_TEST
#define DEPLOY_LIST_TEST 0//1
#endif

#if DEPLOY_LIST_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
