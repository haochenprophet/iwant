#include "satellite_escape.h"
int Csatellite_escape::my_init(void *p)
{
	this->name = "Csatellite_escape";
	this->alias = "satellite_escape";
	return 0;
}

Csatellite_escape::Csatellite_escape()
{
	this->my_init();
}

Csatellite_escape::~Csatellite_escape()
{

}

#ifndef SATELLITE_ESCAPE_TEST
#define SATELLITE_ESCAPE_TEST 0//1
#endif

#if SATELLITE_ESCAPE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
