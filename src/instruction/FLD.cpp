#include "FLD.h"
int CFLD::my_init(void *p)
{
	this->name = "CFLD";
	this->alias = "FLD";
	return 0;
}

CFLD::CFLD()
{
	this->my_init();
}

CFLD::~CFLD()
{

}
