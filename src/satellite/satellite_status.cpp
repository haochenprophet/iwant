#include "satellite_status.h"
int Csatellite_status::my_init(void *p)
{
	this->name = "Csatellite_status";
	this->alias = "satellite_status";
	return 0;
}

Csatellite_status::Csatellite_status()
{
	this->my_init();
}

Csatellite_status::~Csatellite_status()
{

}

#ifndef SATELLITE_STATUS_TEST
#define SATELLITE_STATUS_TEST 0//1
#endif

#if SATELLITE_STATUS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
