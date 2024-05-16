#include "car_operational_mode.h"
int Ccar_operational_mode::my_init(void *p)
{
	this->name = "Ccar_operational_mode";
	this->alias = "car_operational_mode";
	return 0;
}

Ccar_operational_mode::Ccar_operational_mode()
{
	this->my_init();
}

Ccar_operational_mode::~Ccar_operational_mode()
{

}

#ifndef CAR_OPERATIONAL_MODE_TEST
#define CAR_OPERATIONAL_MODE_TEST 0//1
#endif

#if CAR_OPERATIONAL_MODE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
