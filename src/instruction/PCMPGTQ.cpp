#include "PCMPGTQ.h"
int CPCMPGTQ::my_init(void *p)
{
	this->name = "CPCMPGTQ";
	this->alias = "PCMPGTQ";
	return 0;
}

CPCMPGTQ::CPCMPGTQ()
{
	this->my_init();
}

CPCMPGTQ::~CPCMPGTQ()
{

}
