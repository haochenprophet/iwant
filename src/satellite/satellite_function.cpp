#include "satellite_function.h"
int Csatellite_function::my_init(void *p)
{
	this->name = "Csatellite_function";
	this->alias = "satellite_function";
	return 0;
}

Csatellite_function::Csatellite_function()
{
	this->my_init();
}

Csatellite_function::~Csatellite_function()
{

}

#ifndef SATELLITE_FUNCTION_TEST
#define SATELLITE_FUNCTION_TEST 0//1
#endif

#if SATELLITE_FUNCTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
