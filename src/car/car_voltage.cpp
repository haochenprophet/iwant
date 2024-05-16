#include "car_voltage.h"
int Ccar_voltage::my_init(void *p)
{
	this->name = "Ccar_voltage";
	this->alias = "car_voltage";
	return 0;
}

Ccar_voltage::Ccar_voltage()
{
	this->my_init();
}

Ccar_voltage::~Ccar_voltage()
{

}

#ifndef CAR_VOLTAGE_TEST
#define CAR_VOLTAGE_TEST 0//1
#endif

#if CAR_VOLTAGE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
