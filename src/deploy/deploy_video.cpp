#include "deploy_video.h"
int Cdeploy_video::my_init(void *p)
{
	this->name = "Cdeploy_video";
	this->alias = "deploy_video";
	return 0;
}

Cdeploy_video::Cdeploy_video()
{
	this->my_init();
}

Cdeploy_video::~Cdeploy_video()
{

}

#ifndef DEPLOY_VIDEO_TEST
#define DEPLOY_VIDEO_TEST 0//1
#endif

#if DEPLOY_VIDEO_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
