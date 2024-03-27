#include "ocean_nitrogen.h"
int Cocean_nitrogen::my_init(void *p)
{
	this->name = "Cocean_nitrogen";
	this->alias = "ocean_nitrogen";
	return 0;
}

Cocean_nitrogen::Cocean_nitrogen()
{
	this->my_init();
}

Cocean_nitrogen::~Cocean_nitrogen()
{

}

#ifndef OCEAN_NITROGEN_TEST
#define OCEAN_NITROGEN_TEST 0//1
#endif

#if OCEAN_NITROGEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
