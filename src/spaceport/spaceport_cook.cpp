#include "spaceport_cook.h"
int Cspaceport_cook::my_init(void *p)
{
	this->name = "Cspaceport_cook";
	this->alias = "spaceport_cook";
	return 0;
}

Cspaceport_cook::Cspaceport_cook()
{
	this->my_init();
}

Cspaceport_cook::~Cspaceport_cook()
{

}

#ifndef SPACEPORT_COOK_TEST
#define SPACEPORT_COOK_TEST 0//1
#endif

#if SPACEPORT_COOK_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
