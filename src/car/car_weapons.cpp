#include "car_weapons.h"
int Ccar_weapons::my_init(void *p)
{
	this->name = "Ccar_weapons";
	this->alias = "car_weapons";
	return 0;
}

Ccar_weapons::Ccar_weapons()
{
	this->my_init();
}

Ccar_weapons::~Ccar_weapons()
{

}

#ifndef CAR_WEAPONS_TEST
#define CAR_WEAPONS_TEST 0//1
#endif

#if CAR_WEAPONS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
