#include "XEND.h"
int CXEND::my_init(void *p)
{
	this->name = "CXEND";
	this->alias = "XEND";
	return 0;
}

CXEND::CXEND()
{
	this->my_init();
}

CXEND::~CXEND()
{

}
