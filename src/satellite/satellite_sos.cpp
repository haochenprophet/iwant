#include "satellite_sos.h"
int Csatellite_sos::my_init(void *p)
{
	this->name = "Csatellite_sos";
	this->alias = "satellite_sos";
	return 0;
}

Csatellite_sos::Csatellite_sos()
{
	this->my_init();
}

Csatellite_sos::~Csatellite_sos()
{

}

#ifndef SATELLITE_SOS_TEST
#define SATELLITE_SOS_TEST 0//1
#endif

#if SATELLITE_SOS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
