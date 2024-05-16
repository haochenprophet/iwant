#include "ocean_depth.h"
int Cocean_depth::my_init(void *p)
{
	this->name = "Cocean_depth";
	this->alias = "ocean_depth";
	return 0;
}

Cocean_depth::Cocean_depth()
{
	this->my_init();
}

Cocean_depth::~Cocean_depth()
{

}

#ifndef OCEAN_DEPTH_TEST
#define OCEAN_DEPTH_TEST 0//1
#endif

#if OCEAN_DEPTH_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
