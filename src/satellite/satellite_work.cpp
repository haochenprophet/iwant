#include "satellite_work.h"
int Csatellite_work::my_init(void *p)
{
	this->name = "Csatellite_work";
	this->alias = "satellite_work";
	return 0;
}

Csatellite_work::Csatellite_work()
{
	this->my_init();
}

Csatellite_work::~Csatellite_work()
{

}

#ifndef SATELLITE_WORK_TEST
#define SATELLITE_WORK_TEST 0//1
#endif

#if SATELLITE_WORK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
