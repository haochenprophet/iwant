#include "PCMPGTB.h"
int CPCMPGTB::my_init(void *p)
{
	this->name = "CPCMPGTB";
	this->alias = "PCMPGTB";
	return 0;
}

CPCMPGTB::CPCMPGTB()
{
	this->my_init();
}

CPCMPGTB::~CPCMPGTB()
{

}
