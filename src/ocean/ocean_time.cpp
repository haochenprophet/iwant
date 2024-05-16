#include "ocean_time.h"
int Cocean_time::my_init(void *p)
{
	this->name = "Cocean_time";
	this->alias = "ocean_time";
	return 0;
}

Cocean_time::Cocean_time()
{
	this->my_init();
}

Cocean_time::~Cocean_time()
{

}

#ifndef OCEAN_TIME_TEST
#define OCEAN_TIME_TEST 0//1
#endif

#if OCEAN_TIME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
