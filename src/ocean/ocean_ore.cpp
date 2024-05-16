#include "ocean_ore.h"
int Cocean_ore::my_init(void *p)
{
	this->name = "Cocean_ore";
	this->alias = "ocean_ore";
	return 0;
}

Cocean_ore::Cocean_ore()
{
	this->my_init();
}

Cocean_ore::~Cocean_ore()
{

}

#ifndef OCEAN_ORE_TEST
#define OCEAN_ORE_TEST 0//1
#endif

#if OCEAN_ORE_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
