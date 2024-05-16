#include "radar_calculate.h"
int Cradar_calculate::my_init(void *p)
{
	this->name = "Cradar_calculate";
	this->alias = "radar_calculate";
	return 0;
}

Cradar_calculate::Cradar_calculate()
{
	this->my_init();
}

Cradar_calculate::~Cradar_calculate()
{

}

#ifndef RADAR_CALCULATE_TEST
#define RADAR_CALCULATE_TEST 0//1
#endif

#if RADAR_CALCULATE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
