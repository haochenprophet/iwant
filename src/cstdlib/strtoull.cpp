#include "strtoull.h"
int Cstrtoull::my_init(void *p)
{
	this->name = "Cstrtoull";
	this->alias = "strtoull";
	return 0;
}

Cstrtoull::Cstrtoull()
{
	this->my_init();
}

Cstrtoull::~Cstrtoull()
{

}

#ifndef STRTOULL_TEST
#define STRTOULL_TEST 0//1
#endif

#if STRTOULL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "STRTOULL_TEST\n\n";

	return 0;
}
#endif 