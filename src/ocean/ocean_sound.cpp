#include "ocean_sound.h"
int Cocean_sound::my_init(void *p)
{
	this->name = "Cocean_sound";
	this->alias = "ocean_sound";
	return 0;
}

Cocean_sound::Cocean_sound()
{
	this->my_init();
}

Cocean_sound::~Cocean_sound()
{

}

#ifndef OCEAN_SOUND_TEST
#define OCEAN_SOUND_TEST 0//1
#endif

#if OCEAN_SOUND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
