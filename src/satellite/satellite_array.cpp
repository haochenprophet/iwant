#include "satellite_array.h"
int Csatellite_array::my_init(void *p)
{
	this->name = "Csatellite_array";
	this->alias = "satellite_array";
	return 0;
}

Csatellite_array::Csatellite_array()
{
	this->my_init();
}

Csatellite_array::~Csatellite_array()
{

}

#ifndef SATELLITE_ARRAY_TEST
#define SATELLITE_ARRAY_TEST 0//1
#endif

#if SATELLITE_ARRAY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
