#include "XRSTORS.h"
int CXRSTORS::my_init(void *p)
{
	this->name = "CXRSTORS";
	this->alias = "XRSTORS";
	return 0;
}

CXRSTORS::CXRSTORS()
{
	this->my_init();
}

CXRSTORS::~CXRSTORS()
{

}
