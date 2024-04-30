#include "earth_politics.h"
int Cearth_politics::my_init(void *p)
{
	this->name = "Cearth_politics";
	this->alias = "earth_politics";
	return 0;
}

Cearth_politics::Cearth_politics()
{
	this->my_init();
}

Cearth_politics::~Cearth_politics()
{

}

#ifndef EARTH_POLITICS_TEST
#define EARTH_POLITICS_TEST 0//1
#endif

#if EARTH_POLITICS_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
