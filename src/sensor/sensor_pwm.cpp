#include "sensor_pwm.h"
int Csensor_pwm::my_init(void *p)
{
	this->name = "Csensor_pwm";
	this->alias = "sensor_pwm";
	return 0;
}

Csensor_pwm::Csensor_pwm()
{
	this->my_init();
}

Csensor_pwm::~Csensor_pwm()
{

}

#ifndef SENSOR_PWM_TEST
#define SENSOR_PWM_TEST 0//1
#endif

#if SENSOR_PWM_TEST
#include INCLUDE_ALL_H
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
