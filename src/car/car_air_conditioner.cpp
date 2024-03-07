#include "car_air_conditioner.h"
int Ccar_air_conditioner::my_init(void *p)
{
	this->name = "Ccar_air_conditioner";
	this->alias = "car_air_conditioner";
	return 0;
}

Ccar_air_conditioner::Ccar_air_conditioner()
{
	this->my_init();
}

Ccar_air_conditioner::~Ccar_air_conditioner()
{

}

#ifndef CAR_AIR_CONDITIONER_TEST
#define CAR_AIR_CONDITIONER_TEST 0//1
#endif

#if CAR_AIR_CONDITIONER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
