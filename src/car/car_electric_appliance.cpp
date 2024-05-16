#include "car_electric_appliance.h"
int Ccar_electric_appliance::my_init(void *p)
{
	this->name = "Ccar_electric_appliance";
	this->alias = "car_electric_appliance";
	return 0;
}

Ccar_electric_appliance::Ccar_electric_appliance()
{
	this->my_init();
}

Ccar_electric_appliance::~Ccar_electric_appliance()
{

}

#ifndef CAR_ELECTRIC_APPLIANCE_TEST
#define CAR_ELECTRIC_APPLIANCE_TEST 0//1
#endif

#if CAR_ELECTRIC_APPLIANCE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
