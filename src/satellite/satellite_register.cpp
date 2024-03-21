#include "satellite_register.h"
int Csatellite_register::my_init(void *p)
{
	this->name = "Csatellite_register";
	this->alias = "satellite_register";
	return 0;
}

Csatellite_register::Csatellite_register()
{
	this->my_init();
}

Csatellite_register::~Csatellite_register()
{

}

#ifndef SATELLITE_REGISTER_TEST
#define SATELLITE_REGISTER_TEST 0//1
#endif

#if SATELLITE_REGISTER_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
