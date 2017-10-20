#include "CMOVcc.h"
int CCMOVcc::my_init(void *p)
{
	this->name = "CCMOVcc";
	this->alias = "CMOVcc";
	return 0;
}

CCMOVcc::CCMOVcc()
{
	this->my_init();
}

CCMOVcc::~CCMOVcc()
{

}
