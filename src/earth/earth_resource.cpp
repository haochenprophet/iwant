#include "earth_resource.h"
int Cearth_resource::my_init(void *p)
{
	this->name = "Cearth_resource";
	this->alias = "earth_resource";
	return 0;
}

Cearth_resource::Cearth_resource()
{
	this->my_init();
}

Cearth_resource::~Cearth_resource()
{

}

#ifndef EARTH_RESOURCE_TEST
#define EARTH_RESOURCE_TEST 0//1
#endif

#if EARTH_RESOURCE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
