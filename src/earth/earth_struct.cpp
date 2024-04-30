#include "earth_struct.h"
int Cearth_struct::my_init(void *p)
{
	this->name = "Cearth_struct";
	this->alias = "earth_struct";
	return 0;
}

Cearth_struct::Cearth_struct()
{
	this->my_init();
}

Cearth_struct::~Cearth_struct()
{

}

#ifndef EARTH_STRUCT_TEST
#define EARTH_STRUCT_TEST 0//1
#endif

#if EARTH_STRUCT_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
