#include "ocean_help.h"
int Cocean_help::my_init(void *p)
{
	this->name = "Cocean_help";
	this->alias = "ocean_help";
	return 0;
}

Cocean_help::Cocean_help()
{
	this->my_init();
}

Cocean_help::~Cocean_help()
{

}

#ifndef OCEAN_HELP_TEST
#define OCEAN_HELP_TEST 0//1
#endif

#if OCEAN_HELP_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
