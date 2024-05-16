#include "satellite_video.h"
int Csatellite_video::my_init(void *p)
{
	this->name = "Csatellite_video";
	this->alias = "satellite_video";
	return 0;
}

Csatellite_video::Csatellite_video()
{
	this->my_init();
}

Csatellite_video::~Csatellite_video()
{

}

#ifndef SATELLITE_VIDEO_TEST
#define SATELLITE_VIDEO_TEST 0//1
#endif

#if SATELLITE_VIDEO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
