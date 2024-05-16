#include "satellite_audio.h"
int Csatellite_audio::my_init(void *p)
{
	this->name = "Csatellite_audio";
	this->alias = "satellite_audio";
	return 0;
}

Csatellite_audio::Csatellite_audio()
{
	this->my_init();
}

Csatellite_audio::~Csatellite_audio()
{

}

#ifndef SATELLITE_AUDIO_TEST
#define SATELLITE_AUDIO_TEST 0//1
#endif

#if SATELLITE_AUDIO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
