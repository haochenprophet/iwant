#include "earth_network.h"
int Cearth_network::my_init(void *p)
{
	this->name = "Cearth_network";
	this->alias = "earth_network";
	return 0;
}

Cearth_network::Cearth_network()
{
	this->my_init();
}

Cearth_network::~Cearth_network()
{

}

#ifndef EARTH_NETWORK_TEST
#define EARTH_NETWORK_TEST 0//1
#endif

#if EARTH_NETWORK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
