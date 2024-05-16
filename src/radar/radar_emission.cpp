#include "radar_emission.h"
int Cradar_emission::my_init(void *p)
{
	this->name = "Cradar_emission";
	this->alias = "radar_emission";
	return 0;
}

Cradar_emission::Cradar_emission()
{
	this->my_init();
}

Cradar_emission::~Cradar_emission()
{

}

#ifndef RADAR_EMISSION_TEST
#define RADAR_EMISSION_TEST 0//1
#endif

#if RADAR_EMISSION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
