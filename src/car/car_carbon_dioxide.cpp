#include "car_carbon_dioxide.h"
int Ccar_carbon_dioxide::my_init(void *p)
{
	this->name = "Ccar_carbon_dioxide";
	this->alias = "car_carbon_dioxide";
	return 0;
}

Ccar_carbon_dioxide::Ccar_carbon_dioxide()
{
	this->my_init();
}

Ccar_carbon_dioxide::~Ccar_carbon_dioxide()
{

}

#ifndef CAR_CARBON_DIOXIDE_TEST
#define CAR_CARBON_DIOXIDE_TEST 0//1
#endif

#if CAR_CARBON_DIOXIDE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
