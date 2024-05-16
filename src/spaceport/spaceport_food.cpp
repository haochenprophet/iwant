#include "spaceport_food.h"
int Cspaceport_food::my_init(void *p)
{
	this->name = "Cspaceport_food";
	this->alias = "spaceport_food";
	return 0;
}

Cspaceport_food::Cspaceport_food()
{
	this->my_init();
}

Cspaceport_food::~Cspaceport_food()
{

}

#ifndef SPACEPORT_FOOD_TEST
#define SPACEPORT_FOOD_TEST 0//1
#endif

#if SPACEPORT_FOOD_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
