#include "FWAIT.h"
int CFWAIT::my_init(void *p)
{
	this->name = "CFWAIT";
	this->alias = "FWAIT";
	return 0;
}

CFWAIT::CFWAIT()
{
	this->my_init();
}

CFWAIT::~CFWAIT()
{

}
