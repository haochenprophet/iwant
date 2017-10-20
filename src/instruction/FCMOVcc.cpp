#include "FCMOVcc.h"
int CFCMOVcc::my_init(void *p)
{
	this->name = "CFCMOVcc";
	this->alias = "FCMOVcc";
	return 0;
}

CFCMOVcc::CFCMOVcc()
{
	this->my_init();
}

CFCMOVcc::~CFCMOVcc()
{

}
