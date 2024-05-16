#include "car_play.h"
int Ccar_play::my_init(void *p)
{
	this->name = "Ccar_play";
	this->alias = "car_play";
	return 0;
}

Ccar_play::Ccar_play()
{
	this->my_init();
}

Ccar_play::~Ccar_play()
{

}

#ifndef CAR_PLAY_TEST
#define CAR_PLAY_TEST 0//1
#endif

#if CAR_PLAY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
