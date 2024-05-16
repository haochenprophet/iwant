#include "ocean_biont.h"
int Cocean_biont::my_init(void *p)
{
	this->name = "Cocean_biont";
	this->alias = "ocean_biont";
	return 0;
}

Cocean_biont::Cocean_biont()
{
	this->my_init();
}

Cocean_biont::~Cocean_biont()
{

}

#ifndef OCEAN_BIONT_TEST
#define OCEAN_BIONT_TEST 0//1
#endif

#if OCEAN_BIONT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
