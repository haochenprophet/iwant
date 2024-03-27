#include "ocean_magnetic.h"
int Cocean_magnetic::my_init(void *p)
{
	this->name = "Cocean_magnetic";
	this->alias = "ocean_magnetic";
	return 0;
}

Cocean_magnetic::Cocean_magnetic()
{
	this->my_init();
}

Cocean_magnetic::~Cocean_magnetic()
{

}

#ifndef OCEAN_MAGNETIC_TEST
#define OCEAN_MAGNETIC_TEST 0//1
#endif

#if OCEAN_MAGNETIC_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
