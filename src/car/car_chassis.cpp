#include "car_chassis.h"
int Ccar_chassis::my_init(void *p)
{
	this->name = "Ccar_chassis";
	this->alias = "car_chassis";
	return 0;
}

Ccar_chassis::Ccar_chassis()
{
	this->my_init();
}

Ccar_chassis::~Ccar_chassis()
{

}

#ifndef CAR_CHASSIS_TEST
#define CAR_CHASSIS_TEST 0//1
#endif

#if CAR_CHASSIS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
