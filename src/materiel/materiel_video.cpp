#include "materiel_video.h"
int Cmateriel_video::my_init(void *p)
{
	this->name = "Cmateriel_video";
	this->alias = "materiel_video";
	return 0;
}

Cmateriel_video::Cmateriel_video()
{
	this->my_init();
}

Cmateriel_video::~Cmateriel_video()
{

}

#ifndef MATERIEL_VIDEO_TEST
#define MATERIEL_VIDEO_TEST 0//1
#endif

#if MATERIEL_VIDEO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
