#include "satellite_back.h"
int Csatellite_back::my_init(void *p)
{
	this->name = "Csatellite_back";
	this->alias = "satellite_back";
	return 0;
}

Csatellite_back::Csatellite_back()
{
	this->my_init();
}

Csatellite_back::~Csatellite_back()
{

}

#ifndef SATELLITE_BACK_TEST
#define SATELLITE_BACK_TEST 0//1
#endif

#if SATELLITE_BACK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
