#include "FNCLEX.h"
int CFNCLEX::my_init(void *p)
{
	this->name = "CFNCLEX";
	this->alias = "FNCLEX";
	return 0;
}

CFNCLEX::CFNCLEX()
{
	this->my_init();
}

CFNCLEX::~CFNCLEX()
{

}
