#include "XBEGIN.h"
int CXBEGIN::my_init(void *p)
{
	this->name = "CXBEGIN";
	this->alias = "XBEGIN";
	return 0;
}

CXBEGIN::CXBEGIN()
{
	this->my_init();
}

CXBEGIN::~CXBEGIN()
{

}
