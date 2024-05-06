#include "security_solution.h"
int Csecurity_solution::my_init(void *p)
{
	this->name = "Csecurity_solution";
	this->alias = "security_solution";
	return 0;
}

Csecurity_solution::Csecurity_solution()
{
	this->my_init();
}

Csecurity_solution::~Csecurity_solution()
{

}

#ifndef SECURITY_SOLUTION_TEST
#define SECURITY_SOLUTION_TEST 0//1
#endif

#if SECURITY_SOLUTION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
