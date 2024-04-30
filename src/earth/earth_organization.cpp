#include "earth_organization.h"
int Cearth_organization::my_init(void *p)
{
	this->name = "Cearth_organization";
	this->alias = "earth_organization";
	return 0;
}

Cearth_organization::Cearth_organization()
{
	this->my_init();
}

Cearth_organization::~Cearth_organization()
{

}

#ifndef EARTH_ORGANIZATION_TEST
#define EARTH_ORGANIZATION_TEST 0//1
#endif

#if EARTH_ORGANIZATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
