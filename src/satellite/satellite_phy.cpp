#include "satellite_phy.h"
int Csatellite_phy::my_init(void *p)
{
	this->name = "Csatellite_phy";
	this->alias = "satellite_phy";
	return 0;
}

Csatellite_phy::Csatellite_phy()
{
	this->my_init();
}

Csatellite_phy::~Csatellite_phy()
{

}

#ifndef SATELLITE_PHY_TEST
#define SATELLITE_PHY_TEST 0//1
#endif

#if SATELLITE_PHY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
