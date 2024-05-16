#include "earth_information.h"
int Cearth_information::my_init(void *p)
{
	this->name = "Cearth_information";
	this->alias = "earth_information";
	return 0;
}

Cearth_information::Cearth_information()
{
	this->my_init();
}

Cearth_information::~Cearth_information()
{

}

#ifndef EARTH_INFORMATION_TEST
#define EARTH_INFORMATION_TEST 0//1
#endif

#if EARTH_INFORMATION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
