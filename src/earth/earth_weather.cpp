#include "earth_weather.h"
int Cearth_weather::my_init(void *p)
{
	this->name = "Cearth_weather";
	this->alias = "earth_weather";
	return 0;
}

Cearth_weather::Cearth_weather()
{
	this->my_init();
}

Cearth_weather::~Cearth_weather()
{

}

#ifndef EARTH_WEATHER_TEST
#define EARTH_WEATHER_TEST 0//1
#endif

#if EARTH_WEATHER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
