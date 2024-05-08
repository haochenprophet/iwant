#include "radar_track.h"
int Cradar_track::my_init(void *p)
{
	this->name = "Cradar_track";
	this->alias = "radar_track";
	return 0;
}

Cradar_track::Cradar_track()
{
	this->my_init();
}

Cradar_track::~Cradar_track()
{

}

#ifndef RADAR_TRACK_TEST
#define RADAR_TRACK_TEST 0//1
#endif

#if RADAR_TRACK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
