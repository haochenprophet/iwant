#include "satellite_brake_pad.h"
int Csatellite_brake_pad::my_init(void *p)
{
	this->name = "Csatellite_brake_pad";
	this->alias = "satellite_brake_pad";
	return 0;
}

Csatellite_brake_pad::Csatellite_brake_pad()
{
	this->my_init();
}

Csatellite_brake_pad::~Csatellite_brake_pad()
{

}

#ifndef SATELLITE_BRAKE_PAD_TEST
#define SATELLITE_BRAKE_PAD_TEST 0//1
#endif

#if SATELLITE_BRAKE_PAD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
