#include "ocean_environment.h"
int Cocean_environment::my_init(void *p)
{
	this->name = "Cocean_environment";
	this->alias = "ocean_environment";
	return 0;
}

Cocean_environment::Cocean_environment()
{
	this->my_init();
}

Cocean_environment::~Cocean_environment()
{

}

#ifndef OCEAN_ENVIRONMENT_TEST
#define OCEAN_ENVIRONMENT_TEST 0//1
#endif

#if OCEAN_ENVIRONMENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
