#include "FADD.h"
int CFADD::my_init(void *p)
{
	this->name = "CFADD";
	this->alias = "FADD";
	return 0;
}

CFADD::CFADD()
{
	this->my_init();
}

CFADD::~CFADD()
{

}
