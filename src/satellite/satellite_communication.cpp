#include "satellite_communication.h"
int Csatellite_communication::my_init(void *p)
{
	this->name = "Csatellite_communication";
	this->alias = "satellite_communication";
	return 0;
}

Csatellite_communication::Csatellite_communication()
{
	this->my_init();
}

Csatellite_communication::~Csatellite_communication()
{

}

#ifndef SATELLITE_COMMUNICATION_TEST
#define SATELLITE_COMMUNICATION_TEST 0//1
#endif

#if SATELLITE_COMMUNICATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
