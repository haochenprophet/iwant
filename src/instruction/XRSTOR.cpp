#include "XRSTOR.h"
int CXRSTOR::my_init(void *p)
{
	this->name = "CXRSTOR";
	this->alias = "XRSTOR";
	return 0;
}

CXRSTOR::CXRSTOR()
{
	this->my_init();
}

CXRSTOR::~CXRSTOR()
{

}
