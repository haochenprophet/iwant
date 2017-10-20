#include "XTEST.h"
int CXTEST::my_init(void *p)
{
	this->name = "CXTEST";
	this->alias = "XTEST";
	return 0;
}

CXTEST::CXTEST()
{
	this->my_init();
}

CXTEST::~CXTEST()
{

}
