#include "satellite_body.h"
int Csatellite_body::my_init(void *p)
{
	this->name = "Csatellite_body";
	this->alias = "satellite_body";
	return 0;
}

Csatellite_body::Csatellite_body()
{
	this->my_init();
}

Csatellite_body::~Csatellite_body()
{

}

#ifndef SATELLITE_BODY_TEST
#define SATELLITE_BODY_TEST 0//1
#endif

#if SATELLITE_BODY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
