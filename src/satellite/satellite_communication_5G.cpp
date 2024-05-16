#include "satellite_communication_5G.h"
int Csatellite_communication_5G::my_init(void *p)
{
	this->name = "Csatellite_communication_5G";
	this->alias = "satellite_communication_5G";
	return 0;
}

Csatellite_communication_5G::Csatellite_communication_5G()
{
	this->my_init();
}

Csatellite_communication_5G::~Csatellite_communication_5G()
{

}

#ifndef SATELLITE_COMMUNICATION_5G_TEST
#define SATELLITE_COMMUNICATION_5G_TEST 0//1
#endif

#if SATELLITE_COMMUNICATION_5G_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
