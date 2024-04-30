#include "spaceport_co2.h"
int Cspaceport_co2::my_init(void *p)
{
	this->name = "Cspaceport_co2";
	this->alias = "spaceport_co2";
	return 0;
}

Cspaceport_co2::Cspaceport_co2()
{
	this->my_init();
}

Cspaceport_co2::~Cspaceport_co2()
{

}

#ifndef SPACEPORT_CO2_TEST
#define SPACEPORT_CO2_TEST 0//1
#endif

#if SPACEPORT_CO2_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
