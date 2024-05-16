#include "mars_temperature.h"
int Cmars_temperature::my_init(void *p)
{
	this->name = "Cmars_temperature";
	this->alias = "mars_temperature";
	return 0;
}

Cmars_temperature::Cmars_temperature()
{
	this->my_init();
}

Cmars_temperature::~Cmars_temperature()
{

}

#ifndef MARS_TEMPERATURE_TEST
#define MARS_TEMPERATURE_TEST 0//1
#endif

#if MARS_TEMPERATURE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
