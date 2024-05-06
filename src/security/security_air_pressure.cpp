#include "security_air_pressure.h"
int Csecurity_air_pressure::my_init(void *p)
{
	this->name = "Csecurity_air_pressure";
	this->alias = "security_air_pressure";
	return 0;
}

Csecurity_air_pressure::Csecurity_air_pressure()
{
	this->my_init();
}

Csecurity_air_pressure::~Csecurity_air_pressure()
{

}

#ifndef SECURITY_AIR_PRESSURE_TEST
#define SECURITY_AIR_PRESSURE_TEST 0//1
#endif

#if SECURITY_AIR_PRESSURE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
