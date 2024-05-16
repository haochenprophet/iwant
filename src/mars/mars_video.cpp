#include "mars_video.h"
int Cmars_video::my_init(void *p)
{
	this->name = "Cmars_video";
	this->alias = "mars_video";
	return 0;
}

Cmars_video::Cmars_video()
{
	this->my_init();
}

Cmars_video::~Cmars_video()
{

}

#ifndef MARS_VIDEO_TEST
#define MARS_VIDEO_TEST 0//1
#endif

#if MARS_VIDEO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
