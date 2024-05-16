#include "ocean_link.h"
int Cocean_link::my_init(void *p)
{
	this->name = "Cocean_link";
	this->alias = "ocean_link";
	return 0;
}

Cocean_link::Cocean_link()
{
	this->my_init();
}

Cocean_link::~Cocean_link()
{

}

#ifndef OCEAN_LINK_TEST
#define OCEAN_LINK_TEST 0//1
#endif

#if OCEAN_LINK_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
