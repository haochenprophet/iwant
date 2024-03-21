#include "satellite_play.h"
int Csatellite_play::my_init(void *p)
{
	this->name = "Csatellite_play";
	this->alias = "satellite_play";
	return 0;
}

Csatellite_play::Csatellite_play()
{
	this->my_init();
}

Csatellite_play::~Csatellite_play()
{

}

#ifndef SATELLITE_PLAY_TEST
#define SATELLITE_PLAY_TEST 0//1
#endif

#if SATELLITE_PLAY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
