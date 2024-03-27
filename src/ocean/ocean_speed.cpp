#include "ocean_speed.h"
int Cocean_speed::my_init(void *p)
{
	this->name = "Cocean_speed";
	this->alias = "ocean_speed";
	return 0;
}

Cocean_speed::Cocean_speed()
{
	this->my_init();
}

Cocean_speed::~Cocean_speed()
{

}

#ifndef OCEAN_SPEED_TEST
#define OCEAN_SPEED_TEST 0//1
#endif

#if OCEAN_SPEED_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
