#include "satellite_appearance.h"
int Csatellite_appearance::my_init(void *p)
{
	this->name = "Csatellite_appearance";
	this->alias = "satellite_appearance";
	return 0;
}

Csatellite_appearance::Csatellite_appearance()
{
	this->my_init();
}

Csatellite_appearance::~Csatellite_appearance()
{

}

#ifndef SATELLITE_APPEARANCE_TEST
#define SATELLITE_APPEARANCE_TEST 0//1
#endif

#if SATELLITE_APPEARANCE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
