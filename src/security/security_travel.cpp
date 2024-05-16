#include "security_travel.h"
int Csecurity_travel::my_init(void *p)
{
	this->name = "Csecurity_travel";
	this->alias = "security_travel";
	return 0;
}

Csecurity_travel::Csecurity_travel()
{
	this->my_init();
}

Csecurity_travel::~Csecurity_travel()
{

}

#ifndef SECURITY_TRAVEL_TEST
#define SECURITY_TRAVEL_TEST 0//1
#endif

#if SECURITY_TRAVEL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
