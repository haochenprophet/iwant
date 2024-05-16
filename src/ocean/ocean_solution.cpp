#include "ocean_solution.h"
int Cocean_solution::my_init(void *p)
{
	this->name = "Cocean_solution";
	this->alias = "ocean_solution";
	return 0;
}

Cocean_solution::Cocean_solution()
{
	this->my_init();
}

Cocean_solution::~Cocean_solution()
{

}

#ifndef OCEAN_SOLUTION_TEST
#define OCEAN_SOLUTION_TEST 0//1
#endif

#if OCEAN_SOLUTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
