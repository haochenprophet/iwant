#include "radar_timeline.h"
int Cradar_timeline::my_init(void *p)
{
	this->name = "Cradar_timeline";
	this->alias = "radar_timeline";
	return 0;
}

Cradar_timeline::Cradar_timeline()
{
	this->my_init();
}

Cradar_timeline::~Cradar_timeline()
{

}

#ifndef RADAR_TIMELINE_TEST
#define RADAR_TIMELINE_TEST 0//1
#endif

#if RADAR_TIMELINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
