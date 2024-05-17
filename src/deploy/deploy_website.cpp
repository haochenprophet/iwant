#include "deploy_website.h"
int Cdeploy_website::my_init(void *p)
{
	this->name = "Cdeploy_website";
	this->alias = "deploy_website";
	return 0;
}

Cdeploy_website::Cdeploy_website()
{
	this->my_init();
}

Cdeploy_website::~Cdeploy_website()
{

}

#ifndef DEPLOY_WEBSITE_TEST
#define DEPLOY_WEBSITE_TEST 0//1
#endif

#if DEPLOY_WEBSITE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
