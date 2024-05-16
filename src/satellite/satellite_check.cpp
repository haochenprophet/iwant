#include "satellite_check.h"
int Csatellite_check::my_init(void *p)
{
	this->name = "Csatellite_check";
	this->alias = "satellite_check";
	return 0;
}

Csatellite_check::Csatellite_check()
{
	this->my_init();
}

Csatellite_check::~Csatellite_check()
{

}

#ifndef SATELLITE_CHECK_TEST
#define SATELLITE_CHECK_TEST 0//1
#endif

#if SATELLITE_CHECK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
