#include "satellite_control.h"
int Csatellite_control::my_init(void *p)
{
	this->name = "Csatellite_control";
	this->alias = "satellite_control";
	return 0;
}

Csatellite_control::Csatellite_control()
{
	this->my_init();
}

Csatellite_control::~Csatellite_control()
{

}

#ifndef SATELLITE_CONTROL_TEST
#define SATELLITE_CONTROL_TEST 0//1
#endif

#if SATELLITE_CONTROL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
