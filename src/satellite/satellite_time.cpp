#include "satellite_time.h"
int Csatellite_time::my_init(void *p)
{
	this->name = "Csatellite_time";
	this->alias = "satellite_time";
	return 0;
}

Csatellite_time::Csatellite_time()
{
	this->my_init();
}

Csatellite_time::~Csatellite_time()
{

}

#ifndef SATELLITE_TIME_TEST
#define SATELLITE_TIME_TEST 0//1
#endif

#if SATELLITE_TIME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
