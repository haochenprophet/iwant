#include "earth_war.h"
int Cearth_war::my_init(void *p)
{
	this->name = "Cearth_war";
	this->alias = "earth_war";
	return 0;
}

Cearth_war::Cearth_war()
{
	this->my_init();
}

Cearth_war::~Cearth_war()
{

}

#ifndef EARTH_WAR_TEST
#define EARTH_WAR_TEST 0//1
#endif

#if EARTH_WAR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
