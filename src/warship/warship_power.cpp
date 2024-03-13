#include "warship_power.h"
int Cwarship_power::my_init(void *p)
{
	this->name = "Cwarship_power";
	this->alias = "warship_power";
	return 0;
}

Cwarship_power::Cwarship_power()
{
	this->my_init();
}

Cwarship_power::~Cwarship_power()
{

}

#ifndef WARSHIP_POWER_TEST
#define WARSHIP_POWER_TEST 0//1
#endif

#if WARSHIP_POWER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
