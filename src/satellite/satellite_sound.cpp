#include "satellite_sound.h"
int Csatellite_sound::my_init(void *p)
{
	this->name = "Csatellite_sound";
	this->alias = "satellite_sound";
	return 0;
}

Csatellite_sound::Csatellite_sound()
{
	this->my_init();
}

Csatellite_sound::~Csatellite_sound()
{

}

#ifndef SATELLITE_SOUND_TEST
#define SATELLITE_SOUND_TEST 0//1
#endif

#if SATELLITE_SOUND_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
