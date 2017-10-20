#include "PBLENDVB.h"
int CPBLENDVB::my_init(void *p)
{
	this->name = "CPBLENDVB";
	this->alias = "PBLENDVB";
	return 0;
}

CPBLENDVB::CPBLENDVB()
{
	this->my_init();
}

CPBLENDVB::~CPBLENDVB()
{

}
