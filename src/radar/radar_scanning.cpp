#include "radar_scanning.h"
int Cradar_scanning::my_init(void *p)
{
	this->name = "Cradar_scanning";
	this->alias = "radar_scanning";
	return 0;
}

Cradar_scanning::Cradar_scanning()
{
	this->my_init();
}

Cradar_scanning::~Cradar_scanning()
{

}

#ifndef RADAR_SCANNING_TEST
#define RADAR_SCANNING_TEST 0//1
#endif

#if RADAR_SCANNING_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
