#include "satellite_stop.h"
int Csatellite_stop::my_init(void *p)
{
	this->name = "Csatellite_stop";
	this->alias = "satellite_stop";
	return 0;
}

Csatellite_stop::Csatellite_stop()
{
	this->my_init();
}

Csatellite_stop::~Csatellite_stop()
{

}

#ifndef SATELLITE_STOP_TEST
#define SATELLITE_STOP_TEST 0//1
#endif

#if SATELLITE_STOP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
