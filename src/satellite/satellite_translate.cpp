#include "satellite_translate.h"
int Csatellite_translate::my_init(void *p)
{
	this->name = "Csatellite_translate";
	this->alias = "satellite_translate";
	return 0;
}

Csatellite_translate::Csatellite_translate()
{
	this->my_init();
}

Csatellite_translate::~Csatellite_translate()
{

}

#ifndef SATELLITE_TRANSLATE_TEST
#define SATELLITE_TRANSLATE_TEST 0//1
#endif

#if SATELLITE_TRANSLATE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
