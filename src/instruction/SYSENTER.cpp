#include "SYSENTER.h"
int CSYSENTER::my_init(void *p)
{
	this->name = "CSYSENTER";
	this->alias = "SYSENTER";
	return 0;
}

CSYSENTER::CSYSENTER()
{
	this->my_init();
}

CSYSENTER::~CSYSENTER()
{

}
