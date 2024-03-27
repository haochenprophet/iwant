#include "ocean_plan.h"
int Cocean_plan::my_init(void *p)
{
	this->name = "Cocean_plan";
	this->alias = "ocean_plan";
	return 0;
}

Cocean_plan::Cocean_plan()
{
	this->my_init();
}

Cocean_plan::~Cocean_plan()
{

}

#ifndef OCEAN_PLAN_TEST
#define OCEAN_PLAN_TEST 0//1
#endif

#if OCEAN_PLAN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
