#include "ocean_rescue.h"
int Cocean_rescue::my_init(void *p)
{
	this->name = "Cocean_rescue";
	this->alias = "ocean_rescue";
	return 0;
}

Cocean_rescue::Cocean_rescue()
{
	this->my_init();
}

Cocean_rescue::~Cocean_rescue()
{

}

#ifndef OCEAN_RESCUE_TEST
#define OCEAN_RESCUE_TEST 0//1
#endif

#if OCEAN_RESCUE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
