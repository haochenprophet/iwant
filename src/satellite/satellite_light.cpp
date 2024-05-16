#include "satellite_light.h"
int Csatellite_light::my_init(void *p)
{
	this->name = "Csatellite_light";
	this->alias = "satellite_light";
	return 0;
}

Csatellite_light::Csatellite_light()
{
	this->my_init();
}

Csatellite_light::~Csatellite_light()
{

}

#ifndef SATELLITE_LIGHT_TEST
#define SATELLITE_LIGHT_TEST 0//1
#endif

#if SATELLITE_LIGHT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
