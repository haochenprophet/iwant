#include "security_altitude.h"
int Csecurity_altitude::my_init(void *p)
{
	this->name = "Csecurity_altitude";
	this->alias = "security_altitude";
	return 0;
}

Csecurity_altitude::Csecurity_altitude()
{
	this->my_init();
}

Csecurity_altitude::~Csecurity_altitude()
{

}

#ifndef SECURITY_ALTITUDE_TEST
#define SECURITY_ALTITUDE_TEST 0//1
#endif

#if SECURITY_ALTITUDE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
