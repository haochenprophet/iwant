#include "satellite_link.h"
int Csatellite_link::my_init(void *p)
{
	this->name = "Csatellite_link";
	this->alias = "satellite_link";
	return 0;
}

Csatellite_link::Csatellite_link()
{
	this->my_init();
}

Csatellite_link::~Csatellite_link()
{

}

#ifndef SATELLITE_LINK_TEST
#define SATELLITE_LINK_TEST 0//1
#endif

#if SATELLITE_LINK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
