#include "deploy_data.h"
int Cdeploy_data::my_init(void *p)
{
	this->name = "Cdeploy_data";
	this->alias = "deploy_data";
	return 0;
}

Cdeploy_data::Cdeploy_data()
{
	this->my_init();
}

Cdeploy_data::~Cdeploy_data()
{

}

#ifndef DEPLOY_DATA_TEST
#define DEPLOY_DATA_TEST 0//1
#endif

#if DEPLOY_DATA_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
