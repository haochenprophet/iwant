#include "security_heat.h"
int Csecurity_heat::my_init(void *p)
{
	this->name = "Csecurity_heat";
	this->alias = "security_heat";
	return 0;
}

Csecurity_heat::Csecurity_heat()
{
	this->my_init();
}

Csecurity_heat::~Csecurity_heat()
{

}

#ifndef SECURITY_HEAT_TEST
#define SECURITY_HEAT_TEST 0//1
#endif

#if SECURITY_HEAT_TEST
#include "all/all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
