#include "ocean.h"
int Cocean::my_init(void *p)
{
	this->name = "Cocean";
	this->alias = "ocean";
	return 0;
}

Cocean::Cocean()
{
	this->my_init();
}

Cocean::~Cocean()
{

}

#ifndef OCEAN_TEST
#define OCEAN_TEST 0//1
#endif

#if OCEAN_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
