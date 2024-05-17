#include "deploy_image.h"
int Cdeploy_image::my_init(void *p)
{
	this->name = "Cdeploy_image";
	this->alias = "deploy_image";
	return 0;
}

Cdeploy_image::Cdeploy_image()
{
	this->my_init();
}

Cdeploy_image::~Cdeploy_image()
{

}

#ifndef DEPLOY_IMAGE_TEST
#define DEPLOY_IMAGE_TEST 0//1
#endif

#if DEPLOY_IMAGE_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
