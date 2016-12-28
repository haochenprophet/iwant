#include "test.h"
int Ctest::my_init(void *p)
{
	this->name = "Ctest";
	this->alias = "test";
	return 0;
}

Ctest::Ctest()
{
	this->my_init();
}

Ctest::~Ctest()
{

}
