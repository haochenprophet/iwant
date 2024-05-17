#include "deploy_app.h"
int Cdeploy_app::my_init(void *p)
{
	this->name = "Cdeploy_app";
	this->alias = "deploy_app";
	return 0;
}

Cdeploy_app::Cdeploy_app()
{
	this->my_init();
}

Cdeploy_app::~Cdeploy_app()
{

}

#ifndef DEPLOY_APP_TEST
#define DEPLOY_APP_TEST 0//1
#endif

#if DEPLOY_APP_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
