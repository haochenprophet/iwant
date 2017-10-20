#include "PXOR.h"
int CPXOR::my_init(void *p)
{
	this->name = "CPXOR";
	this->alias = "PXOR";
	return 0;
}

CPXOR::CPXOR()
{
	this->my_init();
}

CPXOR::~CPXOR()
{

}
