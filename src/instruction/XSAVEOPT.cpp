#include "XSAVEOPT.h"
int CXSAVEOPT::my_init(void *p)
{
	this->name = "CXSAVEOPT";
	this->alias = "XSAVEOPT";
	return 0;
}

CXSAVEOPT::CXSAVEOPT()
{
	this->my_init();
}

CXSAVEOPT::~CXSAVEOPT()
{

}
