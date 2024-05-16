#include "satellite_solution.h"
int Csatellite_solution::my_init(void *p)
{
	this->name = "Csatellite_solution";
	this->alias = "satellite_solution";
	return 0;
}

Csatellite_solution::Csatellite_solution()
{
	this->my_init();
}

Csatellite_solution::~Csatellite_solution()
{

}

#ifndef SATELLITE_SOLUTION_TEST
#define SATELLITE_SOLUTION_TEST 0//1
#endif

#if SATELLITE_SOLUTION_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
