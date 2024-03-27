#include "ocean_action.h"
int Cocean_action::my_init(void *p)
{
	this->name = "Cocean_action";
	this->alias = "ocean_action";
	return 0;
}

Cocean_action::Cocean_action()
{
	this->my_init();
}

Cocean_action::~Cocean_action()
{

}

#ifndef OCEAN_ACTION_TEST
#define OCEAN_ACTION_TEST 0//1
#endif

#if OCEAN_ACTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
