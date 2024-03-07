#include "car_carbon_monoxide.h"
int Ccar_carbon_monoxide::my_init(void *p)
{
	this->name = "Ccar_carbon_monoxide";
	this->alias = "car_carbon_monoxide";
	return 0;
}

Ccar_carbon_monoxide::Ccar_carbon_monoxide()
{
	this->my_init();
}

Ccar_carbon_monoxide::~Ccar_carbon_monoxide()
{

}

#ifndef CAR_CARBON_MONOXIDE_TEST
#define CAR_CARBON_MONOXIDE_TEST 0//1
#endif

#if CAR_CARBON_MONOXIDE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
