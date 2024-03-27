#include "ocean_array.h"
int Cocean_array::my_init(void *p)
{
	this->name = "Cocean_array";
	this->alias = "ocean_array";
	return 0;
}

Cocean_array::Cocean_array()
{
	this->my_init();
}

Cocean_array::~Cocean_array()
{

}

#ifndef OCEAN_ARRAY_TEST
#define OCEAN_ARRAY_TEST 0//1
#endif

#if OCEAN_ARRAY_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
