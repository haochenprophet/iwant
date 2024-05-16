#include "radar_antenna.h"
int Cradar_antenna::my_init(void *p)
{
	this->name = "Cradar_antenna";
	this->alias = "radar_antenna";
	return 0;
}

Cradar_antenna::Cradar_antenna()
{
	this->my_init();
}

Cradar_antenna::~Cradar_antenna()
{

}

#ifndef RADAR_ANTENNA_TEST
#define RADAR_ANTENNA_TEST 0//1
#endif

#if RADAR_ANTENNA_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
