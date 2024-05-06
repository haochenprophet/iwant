#include "security_optimization.h"
int Csecurity_optimization::my_init(void *p)
{
	this->name = "Csecurity_optimization";
	this->alias = "security_optimization";
	return 0;
}

Csecurity_optimization::Csecurity_optimization()
{
	this->my_init();
}

Csecurity_optimization::~Csecurity_optimization()
{

}

#ifndef SECURITY_OPTIMIZATION_TEST
#define SECURITY_OPTIMIZATION_TEST 0//1
#endif

#if SECURITY_OPTIMIZATION_TEST
#include "../all_h_include.h"
int main(int argc, char *argv[])
{
	WHERE_I;

	return 0;
}
#endif
