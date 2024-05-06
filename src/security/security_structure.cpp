#include "security_structure.h"
int Csecurity_structure::my_init(void *p)
{
	this->name = "Csecurity_structure";
	this->alias = "security_structure";
	return 0;
}

Csecurity_structure::Csecurity_structure()
{
	this->my_init();
}

Csecurity_structure::~Csecurity_structure()
{

}

#ifndef SECURITY_STRUCTURE_TEST
#define SECURITY_STRUCTURE_TEST 0//1
#endif

#if SECURITY_STRUCTURE_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
