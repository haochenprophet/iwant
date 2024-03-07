#include "car_music.h"
int Ccar_music::my_init(void *p)
{
	this->name = "Ccar_music";
	this->alias = "car_music";
	return 0;
}

Ccar_music::Ccar_music()
{
	this->my_init();
}

Ccar_music::~Ccar_music()
{

}

#ifndef CAR_MUSIC_TEST
#define CAR_MUSIC_TEST 0//1
#endif

#if CAR_MUSIC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
