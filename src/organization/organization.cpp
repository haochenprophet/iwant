#include "organization.h"
int Corganization::my_init(void *p)
{
	this->name = "Corganization";
	this->alias = "organization";
	return 0;
}

Corganization::Corganization()
{
	this->my_init();
}

Corganization::~Corganization()
{

}

#ifndef ORGANIZATION_TEST
#define ORGANIZATION_TEST 0//1
#endif

#if ORGANIZATION_TEST
#include "all_h_include.h"
int main(int argc, char *argv[])
{
	std::cout << "ORGANIZATION_TEST\n\n";

	return 0;
}
#endif 