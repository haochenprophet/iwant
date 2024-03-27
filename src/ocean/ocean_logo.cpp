#include "ocean_logo.h"
int Cocean_logo::my_init(void *p)
{
	this->name = "Cocean_logo";
	this->alias = "ocean_logo";
	return 0;
}

Cocean_logo::Cocean_logo()
{
	this->my_init();
}

Cocean_logo::~Cocean_logo()
{

}

#ifndef OCEAN_LOGO_TEST
#define OCEAN_LOGO_TEST 0//1
#endif

#if OCEAN_LOGO_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
