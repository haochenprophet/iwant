#include "security_sensor.h"
int Csecurity_sensor::my_init(void *p)
{
	this->name = "Csecurity_sensor";
	this->alias = "security_sensor";
	return 0;
}

Csecurity_sensor::Csecurity_sensor()
{
	this->my_init();
}

Csecurity_sensor::~Csecurity_sensor()
{

}

#ifndef SECURITY_SENSOR_TEST
#define SECURITY_SENSOR_TEST 0//1
#endif

#if SECURITY_SENSOR_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
