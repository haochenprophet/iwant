#include "radar_altitude.h"
int Cradar_altitude::my_init(void *p)
{
	this->name = "Cradar_altitude";
	this->alias = "radar_altitude";
	return 0;
}

Cradar_altitude::Cradar_altitude()
{
	this->my_init();
}

Cradar_altitude::~Cradar_altitude()
{

}

#ifndef RADAR_ALTITUDE_TEST
#define RADAR_ALTITUDE_TEST 0//1
#endif

#if RADAR_ALTITUDE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
