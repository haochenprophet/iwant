#include "ocean_audio.h"
int Cocean_audio::my_init(void *p)
{
	this->name = "Cocean_audio";
	this->alias = "ocean_audio";
	return 0;
}

Cocean_audio::Cocean_audio()
{
	this->my_init();
}

Cocean_audio::~Cocean_audio()
{

}

#ifndef OCEAN_AUDIO_TEST
#define OCEAN_AUDIO_TEST 0//1
#endif

#if OCEAN_AUDIO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
