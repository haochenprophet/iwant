#include "satellite_log.h"
int Csatellite_log::my_init(void *p)
{
	this->name = "Csatellite_log";
	this->alias = "satellite_log";
	return 0;
}

Csatellite_log::Csatellite_log()
{
	this->my_init();
}

Csatellite_log::~Csatellite_log()
{

}

#ifndef SATELLITE_LOG_TEST
#define SATELLITE_LOG_TEST 0//1
#endif

#if SATELLITE_LOG_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
