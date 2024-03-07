#include "car_water.h"
int Ccar_water::my_init(void *p)
{
	this->name = "Ccar_water";
	this->alias = "car_water";
	return 0;
}

Ccar_water::Ccar_water()
{
	this->my_init();
}

Ccar_water::~Ccar_water()
{

}

#ifndef CAR_WATER_TEST
#define CAR_WATER_TEST 0//1
#endif

#if CAR_WATER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
