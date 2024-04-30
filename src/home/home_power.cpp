#include "home_power.h"
int Chome_power::my_init(void *p)
{
	this->name = "Chome_power";
	this->alias = "home_power";
	return 0;
}

Chome_power::Chome_power()
{
	this->my_init();
}

Chome_power::~Chome_power()
{

}

#ifndef HOME_POWER_TEST
#define HOME_POWER_TEST 0//1
#endif

#if HOME_POWER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
