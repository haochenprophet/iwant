#include "security_audio.h"
int Csecurity_audio::my_init(void *p)
{
	this->name = "Csecurity_audio";
	this->alias = "security_audio";
	return 0;
}

Csecurity_audio::Csecurity_audio()
{
	this->my_init();
}

Csecurity_audio::~Csecurity_audio()
{

}

#ifndef SECURITY_AUDIO_TEST
#define SECURITY_AUDIO_TEST 0//1
#endif

#if SECURITY_AUDIO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
