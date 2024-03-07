#include "car_audio.h"
int Ccar_audio::my_init(void *p)
{
	this->name = "Ccar_audio";
	this->alias = "car_audio";
	return 0;
}

Ccar_audio::Ccar_audio()
{
	this->my_init();
}

Ccar_audio::~Ccar_audio()
{

}

#ifndef CAR_AUDIO_TEST
#define CAR_AUDIO_TEST 0//1
#endif

#if CAR_AUDIO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
