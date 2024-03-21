#include "satellite_abs.h"
int Csatellite_abs::my_init(void *p)
{
	this->name = "Csatellite_abs";
	this->alias = "satellite_abs";
	return 0;
}

Csatellite_abs::Csatellite_abs()
{
	this->my_init();
}

Csatellite_abs::~Csatellite_abs()
{

}

#ifndef SATELLITE_ABS_TEST
#define SATELLITE_ABS_TEST 0//1
#endif

#if SATELLITE_ABS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
