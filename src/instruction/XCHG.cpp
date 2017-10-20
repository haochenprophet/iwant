#include "XCHG.h"
int CXCHG::my_init(void *p)
{
	this->name = "CXCHG";
	this->alias = "XCHG";
	return 0;
}

CXCHG::CXCHG()
{
	this->my_init();
}

CXCHG::~CXCHG()
{

}
