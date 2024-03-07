#include "car_swerve.h"
int Ccar_swerve::my_init(void *p)
{
	this->name = "Ccar_swerve";
	this->alias = "car_swerve";
	return 0;
}

Ccar_swerve::Ccar_swerve()
{
	this->my_init();
}

Ccar_swerve::~Ccar_swerve()
{

}

#ifndef CAR_SWERVE_TEST
#define CAR_SWERVE_TEST 0//1
#endif

#if CAR_SWERVE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
