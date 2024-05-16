#include "car_move.h"
int Ccar_move::my_init(void *p)
{
	this->name = "Ccar_move";
	this->alias = "car_move";
	return 0;
}

Ccar_move::Ccar_move()
{
	this->my_init();
}

Ccar_move::~Ccar_move()
{

}

#ifndef CAR_MOVE_TEST
#define CAR_MOVE_TEST 0//1
#endif

#if CAR_MOVE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
