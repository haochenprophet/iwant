#include "ocean_timeline.h"
int Cocean_timeline::my_init(void *p)
{
	this->name = "Cocean_timeline";
	this->alias = "ocean_timeline";
	return 0;
}

Cocean_timeline::Cocean_timeline()
{
	this->my_init();
}

Cocean_timeline::~Cocean_timeline()
{

}

#ifndef OCEAN_TIMELINE_TEST
#define OCEAN_TIMELINE_TEST 0//1
#endif

#if OCEAN_TIMELINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
