#include "satellite_mode.h"
int Csatellite_mode::my_init(void *p)
{
	this->name = "Csatellite_mode";
	this->alias = "satellite_mode";
	return 0;
}

Csatellite_mode::Csatellite_mode()
{
	this->my_init();
}

Csatellite_mode::~Csatellite_mode()
{

}

#ifndef SATELLITE_MODE_TEST
#define SATELLITE_MODE_TEST 0//1
#endif

#if SATELLITE_MODE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
