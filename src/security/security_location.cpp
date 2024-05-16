#include "security_location.h"
int Csecurity_location::my_init(void *p)
{
	this->name = "Csecurity_location";
	this->alias = "security_location";
	return 0;
}

Csecurity_location::Csecurity_location()
{
	this->my_init();
}

Csecurity_location::~Csecurity_location()
{

}

#ifndef SECURITY_LOCATION_TEST
#define SECURITY_LOCATION_TEST 0//1
#endif

#if SECURITY_LOCATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
