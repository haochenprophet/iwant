#include "ocean_mode.h"
int Cocean_mode::my_init(void *p)
{
	this->name = "Cocean_mode";
	this->alias = "ocean_mode";
	return 0;
}

Cocean_mode::Cocean_mode()
{
	this->my_init();
}

Cocean_mode::~Cocean_mode()
{

}

#ifndef OCEAN_MODE_TEST
#define OCEAN_MODE_TEST 0//1
#endif

#if OCEAN_MODE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
