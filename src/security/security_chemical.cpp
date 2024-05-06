#include "security_chemical.h"
int Csecurity_chemical::my_init(void *p)
{
	this->name = "Csecurity_chemical";
	this->alias = "security_chemical";
	return 0;
}

Csecurity_chemical::Csecurity_chemical()
{
	this->my_init();
}

Csecurity_chemical::~Csecurity_chemical()
{

}

#ifndef SECURITY_CHEMICAL_TEST
#define SECURITY_CHEMICAL_TEST 0//1
#endif

#if SECURITY_CHEMICAL_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
