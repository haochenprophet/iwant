#include "car_video.h"
int Ccar_video::my_init(void *p)
{
	this->name = "Ccar_video";
	this->alias = "car_video";
	return 0;
}

Ccar_video::Ccar_video()
{
	this->my_init();
}

Ccar_video::~Ccar_video()
{

}

#ifndef CAR_VIDEO_TEST
#define CAR_VIDEO_TEST 0//1
#endif

#if CAR_VIDEO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
