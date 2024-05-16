#include "earth_season.h"
int Cearth_season::my_init(void *p)
{
	this->name = "Cearth_season";
	this->alias = "earth_season";
	return 0;
}

Cearth_season::Cearth_season()
{
	this->my_init();
}

Cearth_season::~Cearth_season()
{

}

#ifndef EARTH_SEASON_TEST
#define EARTH_SEASON_TEST 0//1
#endif

#if EARTH_SEASON_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
