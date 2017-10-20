#include "PCMPGTD.h"
int CPCMPGTD::my_init(void *p)
{
	this->name = "CPCMPGTD";
	this->alias = "PCMPGTD";
	return 0;
}

CPCMPGTD::CPCMPGTD()
{
	this->my_init();
}

CPCMPGTD::~CPCMPGTD()
{

}
