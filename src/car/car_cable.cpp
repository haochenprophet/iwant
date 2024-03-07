#include "car_cable.h"
int Ccar_cable::my_init(void *p)
{
	this->name = "Ccar_cable";
	this->alias = "car_cable";
	return 0;
}

Ccar_cable::Ccar_cable()
{
	this->my_init();
}

Ccar_cable::~Ccar_cable()
{

}

#ifndef CAR_CABLE_TEST
#define CAR_CABLE_TEST 0//1
#endif

#if CAR_CABLE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
