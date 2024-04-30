#include "earth.h"
int Cearth::my_init(void *p)
{
	this->name = "Cearth";
	this->alias = "earth";
	return 0;
}

Cearth::Cearth()
{
	this->my_init();
}

Cearth::~Cearth()
{

}

#ifndef EARTH_TEST
#define EARTH_TEST 0//1
#endif

#if EARTH_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
