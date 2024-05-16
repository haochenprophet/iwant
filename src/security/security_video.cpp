#include "security_video.h"
int Csecurity_video::my_init(void *p)
{
	this->name = "Csecurity_video";
	this->alias = "security_video";
	return 0;
}

Csecurity_video::Csecurity_video()
{
	this->my_init();
}

Csecurity_video::~Csecurity_video()
{

}

#ifndef SECURITY_VIDEO_TEST
#define SECURITY_VIDEO_TEST 0//1
#endif

#if SECURITY_VIDEO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
