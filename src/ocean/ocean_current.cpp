#include "ocean_current.h"
int Cocean_current::my_init(void *p)
{
	this->name = "Cocean_current";
	this->alias = "ocean_current";
	return 0;
}

Cocean_current::Cocean_current()
{
	this->my_init();
}

Cocean_current::~Cocean_current()
{

}

#ifndef OCEAN_CURRENT_TEST
#define OCEAN_CURRENT_TEST 0//1
#endif

#if OCEAN_CURRENT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
