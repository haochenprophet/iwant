#include "earth_sunshine.h"
int Cearth_sunshine::my_init(void *p)
{
	this->name = "Cearth_sunshine";
	this->alias = "earth_sunshine";
	return 0;
}

Cearth_sunshine::Cearth_sunshine()
{
	this->my_init();
}

Cearth_sunshine::~Cearth_sunshine()
{

}

#ifndef EARTH_SUNSHINE_TEST
#define EARTH_SUNSHINE_TEST 0//1
#endif

#if EARTH_SUNSHINE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
