#include "car_control.h"
int Ccar_control::my_init(void *p)
{
	this->name = "Ccar_control";
	this->alias = "car_control";
	return 0;
}

Ccar_control::Ccar_control()
{
	this->my_init();
}

Ccar_control::~Ccar_control()
{

}

#ifndef CAR_CONTROL_TEST
#define CAR_CONTROL_TEST 0//1
#endif

#if CAR_CONTROL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
