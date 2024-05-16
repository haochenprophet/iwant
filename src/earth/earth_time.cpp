#include "earth_time.h"
int Cearth_time::my_init(void *p)
{
	this->name = "Cearth_time";
	this->alias = "earth_time";
	return 0;
}

Cearth_time::Cearth_time()
{
	this->my_init();
}

Cearth_time::~Cearth_time()
{

}

#ifndef EARTH_TIME_TEST
#define EARTH_TIME_TEST 0//1
#endif

#if EARTH_TIME_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
