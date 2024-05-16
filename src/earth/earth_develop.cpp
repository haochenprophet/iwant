#include "earth_develop.h"
int Cearth_develop::my_init(void *p)
{
	this->name = "Cearth_develop";
	this->alias = "earth_develop";
	return 0;
}

Cearth_develop::Cearth_develop()
{
	this->my_init();
}

Cearth_develop::~Cearth_develop()
{

}

#ifndef EARTH_DEVELOP_TEST
#define EARTH_DEVELOP_TEST 0//1
#endif

#if EARTH_DEVELOP_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
