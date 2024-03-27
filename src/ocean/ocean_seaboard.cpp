#include "ocean_seaboard.h"
int Cocean_seaboard::my_init(void *p)
{
	this->name = "Cocean_seaboard";
	this->alias = "ocean_seaboard";
	return 0;
}

Cocean_seaboard::Cocean_seaboard()
{
	this->my_init();
}

Cocean_seaboard::~Cocean_seaboard()
{

}

#ifndef OCEAN_SEABOARD_TEST
#define OCEAN_SEABOARD_TEST 0//1
#endif

#if OCEAN_SEABOARD_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
