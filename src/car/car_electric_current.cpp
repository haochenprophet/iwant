#include "car_electric_current.h"
int Ccar_electric_current::my_init(void *p)
{
	this->name = "Ccar_electric_current";
	this->alias = "car_electric_current";
	return 0;
}

Ccar_electric_current::Ccar_electric_current()
{
	this->my_init();
}

Ccar_electric_current::~Ccar_electric_current()
{

}

#ifndef CAR_ELECTRIC_CURRENT_TEST
#define CAR_ELECTRIC_CURRENT_TEST 0//1
#endif

#if CAR_ELECTRIC_CURRENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
