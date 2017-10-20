#include "XORPS.h"
int CXORPS::my_init(void *p)
{
	this->name = "CXORPS";
	this->alias = "XORPS";
	return 0;
}

CXORPS::CXORPS()
{
	this->my_init();
}

CXORPS::~CXORPS()
{

}
