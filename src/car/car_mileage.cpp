#include "car_mileage.h"
int Ccar_mileage::my_init(void *p)
{
	this->name = "Ccar_mileage";
	this->alias = "car_mileage";
	return 0;
}

Ccar_mileage::Ccar_mileage()
{
	this->my_init();
}

Ccar_mileage::~Ccar_mileage()
{

}

#ifndef CAR_MILEAGE_TEST
#define CAR_MILEAGE_TEST 0//1
#endif

#if CAR_MILEAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
