#include "earth_biology.h"
int Cearth_biology::my_init(void *p)
{
	this->name = "Cearth_biology";
	this->alias = "earth_biology";
	return 0;
}

Cearth_biology::Cearth_biology()
{
	this->my_init();
}

Cearth_biology::~Cearth_biology()
{

}

#ifndef EARTH_BIOLOGY_TEST
#define EARTH_BIOLOGY_TEST 0//1
#endif

#if EARTH_BIOLOGY_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
