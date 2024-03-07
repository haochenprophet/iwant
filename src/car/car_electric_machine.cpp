#include "car_electric_machine.h"
int Ccar_electric_machine::my_init(void *p)
{
	this->name = "Ccar_electric_machine";
	this->alias = "car_electric_machine";
	return 0;
}

Ccar_electric_machine::Ccar_electric_machine()
{
	this->my_init();
}

Ccar_electric_machine::~Ccar_electric_machine()
{

}

#ifndef CAR_ELECTRIC_MACHINE_TEST
#define CAR_ELECTRIC_MACHINE_TEST 0//1
#endif

#if CAR_ELECTRIC_MACHINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
