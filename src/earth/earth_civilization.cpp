#include "earth_civilization.h"
int Cearth_civilization::my_init(void *p)
{
	this->name = "Cearth_civilization";
	this->alias = "earth_civilization";
	return 0;
}

Cearth_civilization::Cearth_civilization()
{
	this->my_init();
}

Cearth_civilization::~Cearth_civilization()
{

}

#ifndef EARTH_CIVILIZATION_TEST
#define EARTH_CIVILIZATION_TEST 0//1
#endif

#if EARTH_CIVILIZATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
