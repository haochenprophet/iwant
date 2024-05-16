#include "car_sound.h"
int Ccar_sound::my_init(void *p)
{
	this->name = "Ccar_sound";
	this->alias = "car_sound";
	return 0;
}

Ccar_sound::Ccar_sound()
{
	this->my_init();
}

Ccar_sound::~Ccar_sound()
{

}

#ifndef CAR_SOUND_TEST
#define CAR_SOUND_TEST 0//1
#endif

#if CAR_SOUND_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
