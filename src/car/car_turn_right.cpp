#include "car_turn_right.h"
int Ccar_turn_right::my_init(void *p)
{
	this->name = "Ccar_turn_right";
	this->alias = "car_turn_right";
	return 0;
}

Ccar_turn_right::Ccar_turn_right()
{
	this->my_init();
}

Ccar_turn_right::~Ccar_turn_right()
{

}

#ifndef CAR_TURN_RIGHT_TEST
#define CAR_TURN_RIGHT_TEST 0//1
#endif

#if CAR_TURN_RIGHT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
