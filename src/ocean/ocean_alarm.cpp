#include "ocean_alarm.h"
int Cocean_alarm::my_init(void *p)
{
	this->name = "Cocean_alarm";
	this->alias = "ocean_alarm";
	return 0;
}

Cocean_alarm::Cocean_alarm()
{
	this->my_init();
}

Cocean_alarm::~Cocean_alarm()
{

}

#ifndef OCEAN_ALARM_TEST
#define OCEAN_ALARM_TEST 0//1
#endif

#if OCEAN_ALARM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
