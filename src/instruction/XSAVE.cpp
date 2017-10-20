#include "XSAVE.h"
int CXSAVE::my_init(void *p)
{
	this->name = "CXSAVE";
	this->alias = "XSAVE";
	return 0;
}

CXSAVE::CXSAVE()
{
	this->my_init();
}

CXSAVE::~CXSAVE()
{

}
