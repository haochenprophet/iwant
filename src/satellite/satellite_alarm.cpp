#include "satellite_alarm.h"
int Csatellite_alarm::my_init(void *p)
{
	this->name = "Csatellite_alarm";
	this->alias = "satellite_alarm";
	return 0;
}

Csatellite_alarm::Csatellite_alarm()
{
	this->my_init();
}

Csatellite_alarm::~Csatellite_alarm()
{

}

#ifndef SATELLITE_ALARM_TEST
#define SATELLITE_ALARM_TEST 0//1
#endif

#if SATELLITE_ALARM_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
