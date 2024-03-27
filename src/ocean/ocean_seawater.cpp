#include "ocean_seawater.h"
int Cocean_seawater::my_init(void *p)
{
	this->name = "Cocean_seawater";
	this->alias = "ocean_seawater";
	return 0;
}

Cocean_seawater::Cocean_seawater()
{
	this->my_init();
}

Cocean_seawater::~Cocean_seawater()
{

}

#ifndef OCEAN_SEAWATER_TEST
#define OCEAN_SEAWATER_TEST 0//1
#endif

#if OCEAN_SEAWATER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
