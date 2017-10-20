#include "TEST.h"
int CTEST::my_init(void *p)
{
	this->name = "CTEST";
	this->alias = "TEST";
	return 0;
}

CTEST::CTEST()
{
	this->my_init();
}

CTEST::~CTEST()
{

}
