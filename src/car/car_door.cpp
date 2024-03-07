#include "car_door.h"
int Ccar_door::my_init(void *p)
{
	this->name = "Ccar_door";
	this->alias = "car_door";
	return 0;
}

Ccar_door::Ccar_door()
{
	this->my_init();
}

Ccar_door::~Ccar_door()
{

}

#ifndef CAR_DOOR_TEST
#define CAR_DOOR_TEST 0//1
#endif

#if CAR_DOOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
