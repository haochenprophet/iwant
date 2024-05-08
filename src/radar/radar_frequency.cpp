#include "radar_frequency.h"
int Cradar_frequency::my_init(void *p)
{
	this->name = "Cradar_frequency";
	this->alias = "radar_frequency";
	return 0;
}

Cradar_frequency::Cradar_frequency()
{
	this->my_init();
}

Cradar_frequency::~Cradar_frequency()
{

}

#ifndef RADAR_FREQUENCY_TEST
#define RADAR_FREQUENCY_TEST 0//1
#endif

#if RADAR_FREQUENCY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
