#include "radar_amplitude.h"
int Cradar_amplitude::my_init(void *p)
{
	this->name = "Cradar_amplitude";
	this->alias = "radar_amplitude";
	return 0;
}

Cradar_amplitude::Cradar_amplitude()
{
	this->my_init();
}

Cradar_amplitude::~Cradar_amplitude()
{

}

#ifndef RADAR_AMPLITUDE_TEST
#define RADAR_AMPLITUDE_TEST 0//1
#endif

#if RADAR_AMPLITUDE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
