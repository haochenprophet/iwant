#include "car_can_bus.h"
int Ccar_can_bus::my_init(void *p)
{
	this->name = "Ccar_can_bus";
	this->alias = "car_can_bus";
	return 0;
}

Ccar_can_bus::Ccar_can_bus()
{
	this->my_init();
}

Ccar_can_bus::~Ccar_can_bus()
{

}

#ifndef CAR_CAN_BUS_TEST
#define CAR_CAN_BUS_TEST 0//1
#endif

#if CAR_CAN_BUS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
