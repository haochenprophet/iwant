#include "satellite_repair.h"
int Csatellite_repair::my_init(void *p)
{
	this->name = "Csatellite_repair";
	this->alias = "satellite_repair";
	return 0;
}

Csatellite_repair::Csatellite_repair()
{
	this->my_init();
}

Csatellite_repair::~Csatellite_repair()
{

}

#ifndef SATELLITE_REPAIR_TEST
#define SATELLITE_REPAIR_TEST 0//1
#endif

#if SATELLITE_REPAIR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
