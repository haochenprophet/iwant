#include "car_air.h"
int Ccar_air::my_init(void *p)
{
	this->name = "Ccar_air";
	this->alias = "car_air";
	return 0;
}

Ccar_air::Ccar_air()
{
	this->my_init();
}

Ccar_air::~Ccar_air()
{

}

#ifndef CAR_AIR_TEST
#define CAR_AIR_TEST 0//1
#endif

#if CAR_AIR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
