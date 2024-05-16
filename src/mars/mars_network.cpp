#include "mars_network.h"
int Cmars_network::my_init(void *p)
{
	this->name = "Cmars_network";
	this->alias = "mars_network";
	return 0;
}

Cmars_network::Cmars_network()
{
	this->my_init();
}

Cmars_network::~Cmars_network()
{

}

#ifndef MARS_NETWORK_TEST
#define MARS_NETWORK_TEST 0//1
#endif

#if MARS_NETWORK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
