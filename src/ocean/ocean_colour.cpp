#include "ocean_colour.h"
int Cocean_colour::my_init(void *p)
{
	this->name = "Cocean_colour";
	this->alias = "ocean_colour";
	return 0;
}

Cocean_colour::Cocean_colour()
{
	this->my_init();
}

Cocean_colour::~Cocean_colour()
{

}

#ifndef OCEAN_COLOUR_TEST
#define OCEAN_COLOUR_TEST 0//1
#endif

#if OCEAN_COLOUR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
