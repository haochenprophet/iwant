#include "satellite_colour.h"
int Csatellite_colour::my_init(void *p)
{
	this->name = "Csatellite_colour";
	this->alias = "satellite_colour";
	return 0;
}

Csatellite_colour::Csatellite_colour()
{
	this->my_init();
}

Csatellite_colour::~Csatellite_colour()
{

}

#ifndef SATELLITE_COLOUR_TEST
#define SATELLITE_COLOUR_TEST 0//1
#endif

#if SATELLITE_COLOUR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
