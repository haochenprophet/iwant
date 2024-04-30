#include "earth_timezone.h"
int Cearth_timezone::my_init(void *p)
{
	this->name = "Cearth_timezone";
	this->alias = "earth_timezone";
	return 0;
}

Cearth_timezone::Cearth_timezone()
{
	this->my_init();
}

Cearth_timezone::~Cearth_timezone()
{

}

#ifndef EARTH_TIMEZONE_TEST
#define EARTH_TIMEZONE_TEST 0//1
#endif

#if EARTH_TIMEZONE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
