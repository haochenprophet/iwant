#include "life_game.h"
int Clife_game::my_init(void *p)
{
	this->name = "Clife_game";
	this->alias = "life_game";
	return 0;
}

Clife_game::Clife_game()
{
	this->my_init();
}

Clife_game::~Clife_game()
{

}

#ifndef LIFE_GAME_TEST
#define LIFE_GAME_TEST 0//1
#endif

#if LIFE_GAME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
