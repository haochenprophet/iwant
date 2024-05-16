#include "car_fire.h"
int Ccar_fire::my_init(void *p)
{
	this->name = "Ccar_fire";
	this->alias = "car_fire";
	return 0;
}

Ccar_fire::Ccar_fire()
{
	this->my_init();
}

Ccar_fire::~Ccar_fire()
{

}

#ifndef CAR_FIRE_TEST
#define CAR_FIRE_TEST 0//1
#endif

#if CAR_FIRE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
