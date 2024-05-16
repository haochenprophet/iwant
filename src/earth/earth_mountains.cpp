#include "earth_mountains.h"
int Cearth_mountains::my_init(void *p)
{
	this->name = "Cearth_mountains";
	this->alias = "earth_mountains";
	return 0;
}

Cearth_mountains::Cearth_mountains()
{
	this->my_init();
}

Cearth_mountains::~Cearth_mountains()
{

}

#ifndef EARTH_MOUNTAINS_TEST
#define EARTH_MOUNTAINS_TEST 0//1
#endif

#if EARTH_MOUNTAINS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
