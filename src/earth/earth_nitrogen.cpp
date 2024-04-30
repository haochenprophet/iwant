#include "earth_nitrogen.h"
int Cearth_nitrogen::my_init(void *p)
{
	this->name = "Cearth_nitrogen";
	this->alias = "earth_nitrogen";
	return 0;
}

Cearth_nitrogen::Cearth_nitrogen()
{
	this->my_init();
}

Cearth_nitrogen::~Cearth_nitrogen()
{

}

#ifndef EARTH_NITROGEN_TEST
#define EARTH_NITROGEN_TEST 0//1
#endif

#if EARTH_NITROGEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
