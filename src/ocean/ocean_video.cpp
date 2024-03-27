#include "ocean_video.h"
int Cocean_video::my_init(void *p)
{
	this->name = "Cocean_video";
	this->alias = "ocean_video";
	return 0;
}

Cocean_video::Cocean_video()
{
	this->my_init();
}

Cocean_video::~Cocean_video()
{

}

#ifndef OCEAN_VIDEO_TEST
#define OCEAN_VIDEO_TEST 0//1
#endif

#if OCEAN_VIDEO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
