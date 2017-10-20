#include "SYSEXIT.h"
int CSYSEXIT::my_init(void *p)
{
	this->name = "CSYSEXIT";
	this->alias = "SYSEXIT";
	return 0;
}

CSYSEXIT::CSYSEXIT()
{
	this->my_init();
}

CSYSEXIT::~CSYSEXIT()
{

}
