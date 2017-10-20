#include "FLDL2E.h"
int CFLDL2E::my_init(void *p)
{
	this->name = "CFLDL2E";
	this->alias = "FLDL2E";
	return 0;
}

CFLDL2E::CFLDL2E()
{
	this->my_init();
}

CFLDL2E::~CFLDL2E()
{

}
