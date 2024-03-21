#include "satellite_music.h"
int Csatellite_music::my_init(void *p)
{
	this->name = "Csatellite_music";
	this->alias = "satellite_music";
	return 0;
}

Csatellite_music::Csatellite_music()
{
	this->my_init();
}

Csatellite_music::~Csatellite_music()
{

}

#ifndef SATELLITE_MUSIC_TEST
#define SATELLITE_MUSIC_TEST 0//1
#endif

#if SATELLITE_MUSIC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
