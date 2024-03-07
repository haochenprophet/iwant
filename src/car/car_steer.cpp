#include "car_steer.h"
int Ccar_steer::my_init(void *p)
{
	this->name = "Ccar_steer";
	this->alias = "car_steer";
	return 0;
}

Ccar_steer::Ccar_steer()
{
	this->my_init();
}

Ccar_steer::~Ccar_steer()
{

}

#ifndef CAR_STEER_TEST
#define CAR_STEER_TEST 0//1
#endif

#if CAR_STEER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
