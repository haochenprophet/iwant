#include "spaceport_totemism.h"
int Cspaceport_totemism::my_init(void *p)
{
	this->name = "Cspaceport_totemism";
	this->alias = "spaceport_totemism";
	return 0;
}

Cspaceport_totemism::Cspaceport_totemism()
{
	this->my_init();
}

Cspaceport_totemism::~Cspaceport_totemism()
{

}

#ifndef SPACEPORT_TOTEMISM_TEST
#define SPACEPORT_TOTEMISM_TEST 0//1
#endif

#if SPACEPORT_TOTEMISM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
