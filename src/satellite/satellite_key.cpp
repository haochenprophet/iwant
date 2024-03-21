#include "satellite_key.h"
int Csatellite_key::my_init(void *p)
{
	this->name = "Csatellite_key";
	this->alias = "satellite_key";
	return 0;
}

Csatellite_key::Csatellite_key()
{
	this->my_init();
}

Csatellite_key::~Csatellite_key()
{

}

#ifndef SATELLITE_KEY_TEST
#define SATELLITE_KEY_TEST 0//1
#endif

#if SATELLITE_KEY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
