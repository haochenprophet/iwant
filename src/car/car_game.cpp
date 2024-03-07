#include "car_game.h"
int Ccar_game::my_init(void *p)
{
	this->name = "Ccar_game";
	this->alias = "car_game";
	return 0;
}

Ccar_game::Ccar_game()
{
	this->my_init();
}

Ccar_game::~Ccar_game()
{

}

#ifndef CAR_GAME_TEST
#define CAR_GAME_TEST 0//1
#endif

#if CAR_GAME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
