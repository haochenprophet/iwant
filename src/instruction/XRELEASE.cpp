#include "XRELEASE.h"
int CXRELEASE::my_init(void *p)
{
	this->name = "CXRELEASE";
	this->alias = "XRELEASE";
	return 0;
}

CXRELEASE::CXRELEASE()
{
	this->my_init();
}

CXRELEASE::~CXRELEASE()
{

}
