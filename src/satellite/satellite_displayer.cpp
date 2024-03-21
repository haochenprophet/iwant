#include "satellite_displayer.h"
int Csatellite_displayer::my_init(void *p)
{
	this->name = "Csatellite_displayer";
	this->alias = "satellite_displayer";
	return 0;
}

Csatellite_displayer::Csatellite_displayer()
{
	this->my_init();
}

Csatellite_displayer::~Csatellite_displayer()
{

}

#ifndef SATELLITE_DISPLAYER_TEST
#define SATELLITE_DISPLAYER_TEST 0//1
#endif

#if SATELLITE_DISPLAYER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
