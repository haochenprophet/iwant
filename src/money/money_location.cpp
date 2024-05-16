#include "money_location.h"
int Cmoney_location::my_init(void *p)
{
	this->name = "Cmoney_location";
	this->alias = "money_location";
	return 0;
}

Cmoney_location::Cmoney_location()
{
	this->my_init();
}

Cmoney_location::~Cmoney_location()
{

}

#ifndef MONEY_LOCATION_TEST
#define MONEY_LOCATION_TEST 0//1
#endif

#if MONEY_LOCATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
