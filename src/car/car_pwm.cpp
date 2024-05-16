#include "car_pwm.h"
int Ccar_pwm::my_init(void *p)
{
	this->name = "Ccar_pwm";
	this->alias = "car_pwm";
	return 0;
}

Ccar_pwm::Ccar_pwm()
{
	this->my_init();
}

Ccar_pwm::~Ccar_pwm()
{

}

#ifndef CAR_PWM_TEST
#define CAR_PWM_TEST 0//1
#endif

#if CAR_PWM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
