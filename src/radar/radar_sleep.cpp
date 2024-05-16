#include "radar_sleep.h"
int Cradar_sleep::my_init(void *p)
{
	this->name = "Cradar_sleep";
	this->alias = "radar_sleep";
	return 0;
}

Cradar_sleep::Cradar_sleep()
{
	this->my_init();
}

Cradar_sleep::~Cradar_sleep()
{

}

#ifndef RADAR_SLEEP_TEST
#define RADAR_SLEEP_TEST 0//1
#endif

#if RADAR_SLEEP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
