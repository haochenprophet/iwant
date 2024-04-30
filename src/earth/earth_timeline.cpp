#include "earth_timeline.h"
int Cearth_timeline::my_init(void *p)
{
	this->name = "Cearth_timeline";
	this->alias = "earth_timeline";
	return 0;
}

Cearth_timeline::Cearth_timeline()
{
	this->my_init();
}

Cearth_timeline::~Cearth_timeline()
{

}

#ifndef EARTH_TIMELINE_TEST
#define EARTH_TIMELINE_TEST 0//1
#endif

#if EARTH_TIMELINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
