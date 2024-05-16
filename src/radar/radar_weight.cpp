#include "radar_weight.h"
int Cradar_weight::my_init(void *p)
{
	this->name = "Cradar_weight";
	this->alias = "radar_weight";
	return 0;
}

Cradar_weight::Cradar_weight()
{
	this->my_init();
}

Cradar_weight::~Cradar_weight()
{

}

#ifndef RADAR_WEIGHT_TEST
#define RADAR_WEIGHT_TEST 0//1
#endif

#if RADAR_WEIGHT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
