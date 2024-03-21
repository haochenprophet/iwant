#include "satellite_oil.h"
int Csatellite_oil::my_init(void *p)
{
	this->name = "Csatellite_oil";
	this->alias = "satellite_oil";
	return 0;
}

Csatellite_oil::Csatellite_oil()
{
	this->my_init();
}

Csatellite_oil::~Csatellite_oil()
{

}

#ifndef SATELLITE_OIL_TEST
#define SATELLITE_OIL_TEST 0//1
#endif

#if SATELLITE_OIL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
