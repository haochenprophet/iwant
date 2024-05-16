#include "security_weather.h"
int Csecurity_weather::my_init(void *p)
{
	this->name = "Csecurity_weather";
	this->alias = "security_weather";
	return 0;
}

Csecurity_weather::Csecurity_weather()
{
	this->my_init();
}

Csecurity_weather::~Csecurity_weather()
{

}

#ifndef SECURITY_WEATHER_TEST
#define SECURITY_WEATHER_TEST 0//1
#endif

#if SECURITY_WEATHER_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
