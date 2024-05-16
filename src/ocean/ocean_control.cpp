#include "ocean_control.h"
int Cocean_control::my_init(void *p)
{
	this->name = "Cocean_control";
	this->alias = "ocean_control";
	return 0;
}

Cocean_control::Cocean_control()
{
	this->my_init();
}

Cocean_control::~Cocean_control()
{

}

#ifndef OCEAN_CONTROL_TEST
#define OCEAN_CONTROL_TEST 0//1
#endif

#if OCEAN_CONTROL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
