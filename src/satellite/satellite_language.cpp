#include "satellite_language.h"
int Csatellite_language::my_init(void *p)
{
	this->name = "Csatellite_language";
	this->alias = "satellite_language";
	return 0;
}

Csatellite_language::Csatellite_language()
{
	this->my_init();
}

Csatellite_language::~Csatellite_language()
{

}

#ifndef SATELLITE_LANGUAGE_TEST
#define SATELLITE_LANGUAGE_TEST 0//1
#endif

#if SATELLITE_LANGUAGE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
