#include "car_motor.h"
int Ccar_motor::my_init(void *p)
{
	this->name = "Ccar_motor";
	this->alias = "car_motor";
	return 0;
}

Ccar_motor::Ccar_motor()
{
	this->my_init();
}

Ccar_motor::~Ccar_motor()
{

}

#ifndef CAR_MOTOR_TEST
#define CAR_MOTOR_TEST 0//1
#endif

#if CAR_MOTOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
