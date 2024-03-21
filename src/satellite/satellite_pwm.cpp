#include "satellite_pwm.h"
int Csatellite_pwm::my_init(void *p)
{
	this->name = "Csatellite_pwm";
	this->alias = "satellite_pwm";
	return 0;
}

Csatellite_pwm::Csatellite_pwm()
{
	this->my_init();
}

Csatellite_pwm::~Csatellite_pwm()
{

}

#ifndef SATELLITE_PWM_TEST
#define SATELLITE_PWM_TEST 0//1
#endif

#if SATELLITE_PWM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
