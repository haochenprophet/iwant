#include "security_temperature.h"
int Csecurity_temperature::my_init(void *p)
{
	this->name = "Csecurity_temperature";
	this->alias = "security_temperature";
	return 0;
}

Csecurity_temperature::Csecurity_temperature()
{
	this->my_init();
}

Csecurity_temperature::~Csecurity_temperature()
{

}

#ifndef SECURITY_TEMPERATURE_TEST
#define SECURITY_TEMPERATURE_TEST 0//1
#endif

#if SECURITY_TEMPERATURE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
