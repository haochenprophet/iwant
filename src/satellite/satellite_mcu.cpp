#include "satellite_mcu.h"
int Csatellite_mcu::my_init(void *p)
{
	this->name = "Csatellite_mcu";
	this->alias = "satellite_mcu";
	return 0;
}

Csatellite_mcu::Csatellite_mcu()
{
	this->my_init();
}

Csatellite_mcu::~Csatellite_mcu()
{

}

#ifndef SATELLITE_MCU_TEST
#define SATELLITE_MCU_TEST 0//1
#endif

#if SATELLITE_MCU_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
