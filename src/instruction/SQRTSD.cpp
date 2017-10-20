#include "SQRTSD.h"
int CSQRTSD::my_init(void *p)
{
	this->name = "CSQRTSD";
	this->alias = "SQRTSD";
	return 0;
}

CSQRTSD::CSQRTSD()
{
	this->my_init();
}

CSQRTSD::~CSQRTSD()
{

}
