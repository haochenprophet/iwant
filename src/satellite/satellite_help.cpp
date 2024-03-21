#include "satellite_help.h"
int Csatellite_help::my_init(void *p)
{
	this->name = "Csatellite_help";
	this->alias = "satellite_help";
	return 0;
}

Csatellite_help::Csatellite_help()
{
	this->my_init();
}

Csatellite_help::~Csatellite_help()
{

}

#ifndef SATELLITE_HELP_TEST
#define SATELLITE_HELP_TEST 0//1
#endif

#if SATELLITE_HELP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
