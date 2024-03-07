#include "car_environment.h"
int Ccar_environment::my_init(void *p)
{
	this->name = "Ccar_environment";
	this->alias = "car_environment";
	return 0;
}

Ccar_environment::Ccar_environment()
{
	this->my_init();
}

Ccar_environment::~Ccar_environment()
{

}

#ifndef CAR_ENVIRONMENT_TEST
#define CAR_ENVIRONMENT_TEST 0//1
#endif

#if CAR_ENVIRONMENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
