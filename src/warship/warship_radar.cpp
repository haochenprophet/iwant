#include "warship_radar.h"
int Cwarship_radar::my_init(void *p)
{
	this->name = "Cwarship_radar";
	this->alias = "warship_radar";
	return 0;
}

Cwarship_radar::Cwarship_radar()
{
	this->my_init();
}

Cwarship_radar::~Cwarship_radar()
{

}

#ifndef WARSHIP_RADAR_TEST
#define WARSHIP_RADAR_TEST 0//1
#endif

#if WARSHIP_RADAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
