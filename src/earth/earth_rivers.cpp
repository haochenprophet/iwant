#include "earth_rivers.h"
int Cearth_rivers::my_init(void *p)
{
	this->name = "Cearth_rivers";
	this->alias = "earth_rivers";
	return 0;
}

Cearth_rivers::Cearth_rivers()
{
	this->my_init();
}

Cearth_rivers::~Cearth_rivers()
{

}

#ifndef EARTH_RIVERS_TEST
#define EARTH_RIVERS_TEST 0//1
#endif

#if EARTH_RIVERS_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
