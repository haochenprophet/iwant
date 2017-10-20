#include "XSAVES.h"
int CXSAVES::my_init(void *p)
{
	this->name = "CXSAVES";
	this->alias = "XSAVES";
	return 0;
}

CXSAVES::CXSAVES()
{
	this->my_init();
}

CXSAVES::~CXSAVES()
{

}
