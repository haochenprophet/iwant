#include "home_timeline.h"
int Chome_timeline::my_init(void *p)
{
	this->name = "Chome_timeline";
	this->alias = "home_timeline";
	return 0;
}

Chome_timeline::Chome_timeline()
{
	this->my_init();
}

Chome_timeline::~Chome_timeline()
{

}

#ifndef HOME_TIMELINE_TEST
#define HOME_TIMELINE_TEST 0//1
#endif

#if HOME_TIMELINE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
