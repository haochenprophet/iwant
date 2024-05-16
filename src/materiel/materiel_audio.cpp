#include "materiel_audio.h"
int Cmateriel_audio::my_init(void *p)
{
	this->name = "Cmateriel_audio";
	this->alias = "materiel_audio";
	return 0;
}

Cmateriel_audio::Cmateriel_audio()
{
	this->my_init();
}

Cmateriel_audio::~Cmateriel_audio()
{

}

#ifndef MATERIEL_AUDIO_TEST
#define MATERIEL_AUDIO_TEST 0//1
#endif

#if MATERIEL_AUDIO_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
