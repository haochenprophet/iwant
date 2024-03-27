#include "ocean_oil.h"
int Cocean_oil::my_init(void *p)
{
	this->name = "Cocean_oil";
	this->alias = "ocean_oil";
	return 0;
}

Cocean_oil::Cocean_oil()
{
	this->my_init();
}

Cocean_oil::~Cocean_oil()
{

}

#ifndef OCEAN_OIL_TEST
#define OCEAN_OIL_TEST 0//1
#endif

#if OCEAN_OIL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
