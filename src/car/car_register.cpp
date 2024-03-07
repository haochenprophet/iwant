#include "car_register.h"
int Ccar_register::my_init(void *p)
{
	this->name = "Ccar_register";
	this->alias = "car_register";
	return 0;
}

Ccar_register::Ccar_register()
{
	this->my_init();
}

Ccar_register::~Ccar_register()
{

}

#ifndef CAR_REGISTER_TEST
#define CAR_REGISTER_TEST 0//1
#endif

#if CAR_REGISTER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
