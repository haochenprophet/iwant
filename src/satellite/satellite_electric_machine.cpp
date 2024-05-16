#include "satellite_electric_machine.h"
int Csatellite_electric_machine::my_init(void *p)
{
	this->name = "Csatellite_electric_machine";
	this->alias = "satellite_electric_machine";
	return 0;
}

Csatellite_electric_machine::Csatellite_electric_machine()
{
	this->my_init();
}

Csatellite_electric_machine::~Csatellite_electric_machine()
{

}

#ifndef SATELLITE_ELECTRIC_MACHINE_TEST
#define SATELLITE_ELECTRIC_MACHINE_TEST 0//1
#endif

#if SATELLITE_ELECTRIC_MACHINE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
