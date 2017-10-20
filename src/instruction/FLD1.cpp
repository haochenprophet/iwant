#include "FLD1.h"
int CFLD1::my_init(void *p)
{
	this->name = "CFLD1";
	this->alias = "FLD1";
	return 0;
}

CFLD1::CFLD1()
{
	this->my_init();
}

CFLD1::~CFLD1()
{

}
