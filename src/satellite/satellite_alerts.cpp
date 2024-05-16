#include "satellite_alerts.h"
int Csatellite_alerts::my_init(void *p)
{
	this->name = "Csatellite_alerts";
	this->alias = "satellite_alerts";
	return 0;
}

Csatellite_alerts::Csatellite_alerts()
{
	this->my_init();
}

Csatellite_alerts::~Csatellite_alerts()
{

}

#ifndef SATELLITE_ALERTS_TEST
#define SATELLITE_ALERTS_TEST 0//1
#endif

#if SATELLITE_ALERTS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
