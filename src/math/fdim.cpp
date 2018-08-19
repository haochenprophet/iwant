#include "fdim.h"
int Cfdim::my_init(void *p)
{
	this->name = "Cfdim";
	this->alias = "fdim";
	return 0;
}

Cfdim::Cfdim()
{
	this->my_init();
}

Cfdim::~Cfdim()
{

}

#ifndef FDIM_TEST
#define FDIM_TEST 0//1
#endif

#if FDIM_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "FDIM_TEST\n\n";

	return 0;
}
#endif 