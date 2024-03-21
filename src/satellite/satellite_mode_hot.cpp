#include "satellite_mode_hot.h"
int Csatellite_mode_hot::my_init(void *p)
{
	this->name = "Csatellite_mode_hot";
	this->alias = "satellite_mode_hot";
	return 0;
}

Csatellite_mode_hot::Csatellite_mode_hot()
{
	this->my_init();
}

Csatellite_mode_hot::~Csatellite_mode_hot()
{

}

#ifndef SATELLITE_MODE_HOT_TEST
#define SATELLITE_MODE_HOT_TEST 0//1
#endif

#if SATELLITE_MODE_HOT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
