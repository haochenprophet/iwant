#include "ocean_direction.h"
int Cocean_direction::my_init(void *p)
{
	this->name = "Cocean_direction";
	this->alias = "ocean_direction";
	return 0;
}

Cocean_direction::Cocean_direction()
{
	this->my_init();
}

Cocean_direction::~Cocean_direction()
{

}

#ifndef OCEAN_DIRECTION_TEST
#define OCEAN_DIRECTION_TEST 0//1
#endif

#if OCEAN_DIRECTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
