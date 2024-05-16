#include "satellite_can_bus.h"
int Csatellite_can_bus::my_init(void *p)
{
	this->name = "Csatellite_can_bus";
	this->alias = "satellite_can_bus";
	return 0;
}

Csatellite_can_bus::Csatellite_can_bus()
{
	this->my_init();
}

Csatellite_can_bus::~Csatellite_can_bus()
{

}

#ifndef SATELLITE_CAN_BUS_TEST
#define SATELLITE_CAN_BUS_TEST 0//1
#endif

#if SATELLITE_CAN_BUS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
