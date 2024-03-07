#include "car_wheel.h"
int Ccar_wheel::my_init(void *p)
{
	this->name = "Ccar_wheel";
	this->alias = "car_wheel";
	return 0;
}

Ccar_wheel::Ccar_wheel()
{
	this->my_init();
}

Ccar_wheel::~Ccar_wheel()
{

}

#ifndef CAR_WHEEL_TEST
#define CAR_WHEEL_TEST 0//1
#endif

#if CAR_WHEEL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
