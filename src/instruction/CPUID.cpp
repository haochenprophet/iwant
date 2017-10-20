#include "CPUID.h"
int CCPUID::my_init(void *p)
{
	this->name = "CCPUID";
	this->alias = "CPUID";
	return 0;
}

CCPUID::CCPUID()
{
	this->my_init();
}

CCPUID::~CCPUID()
{

}
