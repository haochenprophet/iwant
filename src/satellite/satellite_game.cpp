#include "satellite_game.h"
int Csatellite_game::my_init(void *p)
{
	this->name = "Csatellite_game";
	this->alias = "satellite_game";
	return 0;
}

Csatellite_game::Csatellite_game()
{
	this->my_init();
}

Csatellite_game::~Csatellite_game()
{

}

#ifndef SATELLITE_GAME_TEST
#define SATELLITE_GAME_TEST 0//1
#endif

#if SATELLITE_GAME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
