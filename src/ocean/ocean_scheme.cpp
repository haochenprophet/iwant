#include "ocean_scheme.h"
int Cocean_scheme::my_init(void *p)
{
	this->name = "Cocean_scheme";
	this->alias = "ocean_scheme";
	return 0;
}

Cocean_scheme::Cocean_scheme()
{
	this->my_init();
}

Cocean_scheme::~Cocean_scheme()
{

}

#ifndef OCEAN_SCHEME_TEST
#define OCEAN_SCHEME_TEST 0//1
#endif

#if OCEAN_SCHEME_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
