#include "earth_race.h"
int Cearth_race::my_init(void *p)
{
	this->name = "Cearth_race";
	this->alias = "earth_race";
	return 0;
}

Cearth_race::Cearth_race()
{
	this->my_init();
}

Cearth_race::~Cearth_race()
{

}

#ifndef EARTH_RACE_TEST
#define EARTH_RACE_TEST 0//1
#endif

#if EARTH_RACE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
