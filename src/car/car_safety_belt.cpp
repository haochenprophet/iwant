#include "car_safety_belt.h"
int Ccar_safety_belt::my_init(void *p)
{
	this->name = "Ccar_safety_belt";
	this->alias = "car_safety_belt";
	return 0;
}

Ccar_safety_belt::Ccar_safety_belt()
{
	this->my_init();
}

Ccar_safety_belt::~Ccar_safety_belt()
{

}

#ifndef CAR_SAFETY_BELT_TEST
#define CAR_SAFETY_BELT_TEST 0//1
#endif

#if CAR_SAFETY_BELT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
