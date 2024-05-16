#include "satellite_safety.h"
int Csatellite_safety::my_init(void *p)
{
	this->name = "Csatellite_safety";
	this->alias = "satellite_safety";
	return 0;
}

Csatellite_safety::Csatellite_safety()
{
	this->my_init();
}

Csatellite_safety::~Csatellite_safety()
{

}

#ifndef SATELLITE_SAFETY_TEST
#define SATELLITE_SAFETY_TEST 0//1
#endif

#if SATELLITE_SAFETY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
