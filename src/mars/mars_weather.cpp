#include "mars_weather.h"
int Cmars_weather::my_init(void *p)
{
	this->name = "Cmars_weather";
	this->alias = "mars_weather";
	return 0;
}

Cmars_weather::Cmars_weather()
{
	this->my_init();
}

Cmars_weather::~Cmars_weather()
{

}

#ifndef MARS_WEATHER_TEST
#define MARS_WEATHER_TEST 0//1
#endif

#if MARS_WEATHER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
