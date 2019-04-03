#include "pcie.h"
int Cpcie::my_init(void *p)
{
	this->name = "Cpcie";
	this->alias = "pcie";
	return 0;
}

Cpcie::Cpcie()
{
	this->my_init();
}

Cpcie::~Cpcie()
{

}

#ifndef PCIE_TEST
#define PCIE_TEST 0//1
#endif

#if PCIE_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "PCIE_TEST\n\n";

	return 0;
}
#endif 