#include "car_driver.h"
int Ccar_driver::my_init(void *p)
{
	this->name = "Ccar_driver";
	this->alias = "car_driver";
	return 0;
}

Ccar_driver::Ccar_driver()
{
	this->my_init();
}

Ccar_driver::~Ccar_driver()
{

}

#ifndef CAR_DRIVER_TEST
#define CAR_DRIVER_TEST 0//1
#endif

#if CAR_DRIVER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
