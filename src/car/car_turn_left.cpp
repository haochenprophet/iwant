#include "car_turn_left.h"
int Ccar_turn_left::my_init(void *p)
{
	this->name = "Ccar_turn_left";
	this->alias = "car_turn_left";
	return 0;
}

Ccar_turn_left::Ccar_turn_left()
{
	this->my_init();
}

Ccar_turn_left::~Ccar_turn_left()
{

}

#ifndef CAR_TURN_LEFT_TEST
#define CAR_TURN_LEFT_TEST 0//1
#endif

#if CAR_TURN_LEFT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
