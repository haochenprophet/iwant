#include "security_electric.h"
int Csecurity_electric::my_init(void *p)
{
	this->name = "Csecurity_electric";
	this->alias = "security_electric";
	return 0;
}

Csecurity_electric::Csecurity_electric()
{
	this->my_init();
}

Csecurity_electric::~Csecurity_electric()
{

}

#ifndef SECURITY_ELECTRIC_TEST
#define SECURITY_ELECTRIC_TEST 0//1
#endif

#if SECURITY_ELECTRIC_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
