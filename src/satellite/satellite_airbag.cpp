#include "satellite_airbag.h"
int Csatellite_airbag::my_init(void *p)
{
	this->name = "Csatellite_airbag";
	this->alias = "satellite_airbag";
	return 0;
}

Csatellite_airbag::Csatellite_airbag()
{
	this->my_init();
}

Csatellite_airbag::~Csatellite_airbag()
{

}

#ifndef SATELLITE_AIRBAG_TEST
#define SATELLITE_AIRBAG_TEST 0//1
#endif

#if SATELLITE_AIRBAG_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
