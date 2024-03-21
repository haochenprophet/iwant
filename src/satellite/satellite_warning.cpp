#include "satellite_warning.h"
int Csatellite_warning::my_init(void *p)
{
	this->name = "Csatellite_warning";
	this->alias = "satellite_warning";
	return 0;
}

Csatellite_warning::Csatellite_warning()
{
	this->my_init();
}

Csatellite_warning::~Csatellite_warning()
{

}

#ifndef SATELLITE_WARNING_TEST
#define SATELLITE_WARNING_TEST 0//1
#endif

#if SATELLITE_WARNING_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
