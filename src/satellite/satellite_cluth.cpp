#include "satellite_cluth.h"
int Csatellite_cluth::my_init(void *p)
{
	this->name = "Csatellite_cluth";
	this->alias = "satellite_cluth";
	return 0;
}

Csatellite_cluth::Csatellite_cluth()
{
	this->my_init();
}

Csatellite_cluth::~Csatellite_cluth()
{

}

#ifndef SATELLITE_CLUTH_TEST
#define SATELLITE_CLUTH_TEST 0//1
#endif

#if SATELLITE_CLUTH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
