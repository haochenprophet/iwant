#include "satellite_stack.h"
int Csatellite_stack::my_init(void *p)
{
	this->name = "Csatellite_stack";
	this->alias = "satellite_stack";
	return 0;
}

Csatellite_stack::Csatellite_stack()
{
	this->my_init();
}

Csatellite_stack::~Csatellite_stack()
{

}

#ifndef SATELLITE_STACK_TEST
#define SATELLITE_STACK_TEST 0//1
#endif

#if SATELLITE_STACK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
