#include "earth_government.h"
int Cearth_government::my_init(void *p)
{
	this->name = "Cearth_government";
	this->alias = "earth_government";
	return 0;
}

Cearth_government::Cearth_government()
{
	this->my_init();
}

Cearth_government::~Cearth_government()
{

}

#ifndef EARTH_GOVERNMENT_TEST
#define EARTH_GOVERNMENT_TEST 0//1
#endif

#if EARTH_GOVERNMENT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
