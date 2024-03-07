#include "car_temperature.h"
int Ccar_temperature::my_init(void *p)
{
	this->name = "Ccar_temperature";
	this->alias = "car_temperature";
	return 0;
}

Ccar_temperature::Ccar_temperature()
{
	this->my_init();
}

Ccar_temperature::~Ccar_temperature()
{

}

#ifndef CAR_TEMPERATURE_TEST
#define CAR_TEMPERATURE_TEST 0//1
#endif

#if CAR_TEMPERATURE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
