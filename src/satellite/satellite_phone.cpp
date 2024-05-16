#include "satellite_phone.h"
int Csatellite_phone::my_init(void *p)
{
	this->name = "Csatellite_phone";
	this->alias = "satellite_phone";
	return 0;
}

Csatellite_phone::Csatellite_phone()
{
	this->my_init();
}

Csatellite_phone::~Csatellite_phone()
{

}

#ifndef SATELLITE_PHONE_TEST
#define SATELLITE_PHONE_TEST 0//1
#endif

#if SATELLITE_PHONE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
