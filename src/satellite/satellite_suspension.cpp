#include "satellite_suspension.h"
int Csatellite_suspension::my_init(void *p)
{
	this->name = "Csatellite_suspension";
	this->alias = "satellite_suspension";
	return 0;
}

Csatellite_suspension::Csatellite_suspension()
{
	this->my_init();
}

Csatellite_suspension::~Csatellite_suspension()
{

}

#ifndef SATELLITE_SUSPENSION_TEST
#define SATELLITE_SUSPENSION_TEST 0//1
#endif

#if SATELLITE_SUSPENSION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
