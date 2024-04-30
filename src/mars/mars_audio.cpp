#include "mars_audio.h"
int Cmars_audio::my_init(void *p)
{
	this->name = "Cmars_audio";
	this->alias = "mars_audio";
	return 0;
}

Cmars_audio::Cmars_audio()
{
	this->my_init();
}

Cmars_audio::~Cmars_audio()
{

}

#ifndef MARS_AUDIO_TEST
#define MARS_AUDIO_TEST 0//1
#endif

#if MARS_AUDIO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
