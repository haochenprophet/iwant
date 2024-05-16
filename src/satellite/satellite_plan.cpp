#include "satellite_plan.h"
int Csatellite_plan::my_init(void *p)
{
	this->name = "Csatellite_plan";
	this->alias = "satellite_plan";
	return 0;
}

Csatellite_plan::Csatellite_plan()
{
	this->my_init();
}

Csatellite_plan::~Csatellite_plan()
{

}

#ifndef SATELLITE_PLAN_TEST
#define SATELLITE_PLAN_TEST 0//1
#endif

#if SATELLITE_PLAN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
