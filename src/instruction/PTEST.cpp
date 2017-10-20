#include "PTEST.h"
int CPTEST::my_init(void *p)
{
	this->name = "CPTEST";
	this->alias = "PTEST";
	return 0;
}

CPTEST::CPTEST()
{
	this->my_init();
}

CPTEST::~CPTEST()
{

}
