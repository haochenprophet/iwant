#include "car_braking.h"
int Ccar_braking::my_init(void *p)
{
	this->name = "Ccar_braking";
	this->alias = "car_braking";
	return 0;
}

Ccar_braking::Ccar_braking()
{
	this->my_init();
}

Ccar_braking::~Ccar_braking()
{

}

#ifndef CAR_BRAKING_TEST
#define CAR_BRAKING_TEST 0//1
#endif

#if CAR_BRAKING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
