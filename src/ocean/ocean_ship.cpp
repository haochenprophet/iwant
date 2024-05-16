#include "ocean_ship.h"
int Cocean_ship::my_init(void *p)
{
	this->name = "Cocean_ship";
	this->alias = "ocean_ship";
	return 0;
}

Cocean_ship::Cocean_ship()
{
	this->my_init();
}

Cocean_ship::~Cocean_ship()
{

}

#ifndef OCEAN_SHIP_TEST
#define OCEAN_SHIP_TEST 0//1
#endif

#if OCEAN_SHIP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
