#include "deploy_camera.h"
int Cdeploy_camera::my_init(void *p)
{
	this->name = "Cdeploy_camera";
	this->alias = "deploy_camera";
	return 0;
}

Cdeploy_camera::Cdeploy_camera()
{
	this->my_init();
}

Cdeploy_camera::~Cdeploy_camera()
{

}

#ifndef DEPLOY_CAMERA_TEST
#define DEPLOY_CAMERA_TEST 0//1
#endif

#if DEPLOY_CAMERA_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
