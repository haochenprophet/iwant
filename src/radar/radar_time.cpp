#include "radar_time.h"
int Cradar_time::my_init(void *p)
{
	this->name = "Cradar_time";
	this->alias = "radar_time";
	return 0;
}

Cradar_time::Cradar_time()
{
	this->my_init();
}

Cradar_time::~Cradar_time()
{

}

#ifndef RADAR_TIME_TEST
#define RADAR_TIME_TEST 0//1
#endif

#if RADAR_TIME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
