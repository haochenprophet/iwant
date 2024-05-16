#include "home_travel.h"
int Chome_travel::my_init(void *p)
{
	this->name = "Chome_travel";
	this->alias = "home_travel";
	return 0;
}

Chome_travel::Chome_travel()
{
	this->my_init();
}

Chome_travel::~Chome_travel()
{

}

#ifndef HOME_TRAVEL_TEST
#define HOME_TRAVEL_TEST 0//1
#endif

#if HOME_TRAVEL_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
