#include "car_mcu.h"
int Ccar_mcu::my_init(void *p)
{
	this->name = "Ccar_mcu";
	this->alias = "car_mcu";
	return 0;
}

Ccar_mcu::Ccar_mcu()
{
	this->my_init();
}

Ccar_mcu::~Ccar_mcu()
{

}

#ifndef CAR_MCU_TEST
#define CAR_MCU_TEST 0//1
#endif

#if CAR_MCU_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
