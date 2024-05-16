#include "home_air.h"
int Chome_air::my_init(void *p)
{
	this->name = "Chome_air";
	this->alias = "home_air";
	return 0;
}

Chome_air::Chome_air()
{
	this->my_init();
}

Chome_air::~Chome_air()
{

}

#ifndef HOME_AIR_TEST
#define HOME_AIR_TEST 0//1
#endif

#if HOME_AIR_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
