#include "scalbln.h"
int Cscalbln::my_init(void *p)
{
	this->name = "Cscalbln";
	this->alias = "scalbln";
	return 0;
}

Cscalbln::Cscalbln()
{
	this->my_init();
}

Cscalbln::~Cscalbln()
{

}

#ifndef SCALBLN_TEST
#define SCALBLN_TEST 0//1
#endif

#if SCALBLN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "SCALBLN_TEST\n\n";

	return 0;
}
#endif 