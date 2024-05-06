#include "security_oxygen.h"
int Csecurity_oxygen::my_init(void *p)
{
	this->name = "Csecurity_oxygen";
	this->alias = "security_oxygen";
	return 0;
}

Csecurity_oxygen::Csecurity_oxygen()
{
	this->my_init();
}

Csecurity_oxygen::~Csecurity_oxygen()
{

}

#ifndef SECURITY_OXYGEN_TEST
#define SECURITY_OXYGEN_TEST 0//1
#endif

#if SECURITY_OXYGEN_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
