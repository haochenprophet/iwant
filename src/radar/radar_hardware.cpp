#include "radar_hardware.h"
int Cradar_hardware::my_init(void *p)
{
	this->name = "Cradar_hardware";
	this->alias = "radar_hardware";
	return 0;
}

Cradar_hardware::Cradar_hardware()
{
	this->my_init();
}

Cradar_hardware::~Cradar_hardware()
{

}

#ifndef RADAR_HARDWARE_TEST
#define RADAR_HARDWARE_TEST 0//1
#endif

#if RADAR_HARDWARE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
