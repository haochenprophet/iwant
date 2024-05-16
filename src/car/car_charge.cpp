#include "car_charge.h"
int Ccar_charge::my_init(void *p)
{
	this->name = "Ccar_charge";
	this->alias = "car_charge";
	return 0;
}

Ccar_charge::Ccar_charge()
{
	this->my_init();
}

Ccar_charge::~Ccar_charge()
{

}

#ifndef CAR_CHARGE_TEST
#define CAR_CHARGE_TEST 0//1
#endif

#if CAR_CHARGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
