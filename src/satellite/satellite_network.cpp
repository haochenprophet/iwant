#include "satellite_network.h"
int Csatellite_network::my_init(void *p)
{
	this->name = "Csatellite_network";
	this->alias = "satellite_network";
	return 0;
}

Csatellite_network::Csatellite_network()
{
	this->my_init();
}

Csatellite_network::~Csatellite_network()
{

}

#ifndef SATELLITE_NETWORK_TEST
#define SATELLITE_NETWORK_TEST 0//1
#endif

#if SATELLITE_NETWORK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
