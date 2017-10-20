#include "XADD.h"
int CXADD::my_init(void *p)
{
	this->name = "CXADD";
	this->alias = "XADD";
	return 0;
}

CXADD::CXADD()
{
	this->my_init();
}

CXADD::~CXADD()
{

}
