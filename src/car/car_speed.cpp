#include "car_speed.h"
int Ccar_speed::my_init(void *p)
{
	this->name = "Ccar_speed";
	this->alias = "car_speed";
	return 0;
}

Ccar_speed::Ccar_speed()
{
	this->my_init();
}

Ccar_speed::~Ccar_speed()
{

}

#ifndef CAR_SPEED_TEST
#define CAR_SPEED_TEST 0//1
#endif

#if CAR_SPEED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
