#include "satellite_mayday.h"
int Csatellite_mayday::my_init(void *p)
{
	this->name = "Csatellite_mayday";
	this->alias = "satellite_mayday";
	return 0;
}

Csatellite_mayday::Csatellite_mayday()
{
	this->my_init();
}

Csatellite_mayday::~Csatellite_mayday()
{

}

#ifndef SATELLITE_MAYDAY_TEST
#define SATELLITE_MAYDAY_TEST 0//1
#endif

#if SATELLITE_MAYDAY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
