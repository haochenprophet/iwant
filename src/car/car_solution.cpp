#include "car_solution.h"
int Ccar_solution::my_init(void *p)
{
	this->name = "Ccar_solution";
	this->alias = "car_solution";
	return 0;
}

Ccar_solution::Ccar_solution()
{
	this->my_init();
}

Ccar_solution::~Ccar_solution()
{

}

#ifndef CAR_SOLUTION_TEST
#define CAR_SOLUTION_TEST 0//1
#endif

#if CAR_SOLUTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
