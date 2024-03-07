#include "car_fan.h"
int Ccar_fan::my_init(void *p)
{
	this->name = "Ccar_fan";
	this->alias = "car_fan";
	return 0;
}

Ccar_fan::Ccar_fan()
{
	this->my_init();
}

Ccar_fan::~Ccar_fan()
{

}

#ifndef CAR_FAN_TEST
#define CAR_FAN_TEST 0//1
#endif

#if CAR_FAN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
