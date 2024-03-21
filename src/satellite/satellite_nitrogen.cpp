#include "satellite_nitrogen.h"
int Csatellite_nitrogen::my_init(void *p)
{
	this->name = "Csatellite_nitrogen";
	this->alias = "satellite_nitrogen";
	return 0;
}

Csatellite_nitrogen::Csatellite_nitrogen()
{
	this->my_init();
}

Csatellite_nitrogen::~Csatellite_nitrogen()
{

}

#ifndef SATELLITE_NITROGEN_TEST
#define SATELLITE_NITROGEN_TEST 0//1
#endif

#if SATELLITE_NITROGEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
