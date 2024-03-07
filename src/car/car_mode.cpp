#include "car_mode.h"
int Ccar_mode::my_init(void *p)
{
	this->name = "Ccar_mode";
	this->alias = "car_mode";
	return 0;
}

Ccar_mode::Ccar_mode()
{
	this->my_init();
}

Ccar_mode::~Ccar_mode()
{

}

#ifndef CAR_MODE_TEST
#define CAR_MODE_TEST 0//1
#endif

#if CAR_MODE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
