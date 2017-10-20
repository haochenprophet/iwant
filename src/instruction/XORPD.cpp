#include "XORPD.h"
int CXORPD::my_init(void *p)
{
	this->name = "CXORPD";
	this->alias = "XORPD";
	return 0;
}

CXORPD::CXORPD()
{
	this->my_init();
}

CXORPD::~CXORPD()
{

}
