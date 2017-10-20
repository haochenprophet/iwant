#include "POR.h"
int CPOR::my_init(void *p)
{
	this->name = "CPOR";
	this->alias = "POR";
	return 0;
}

CPOR::CPOR()
{
	this->my_init();
}

CPOR::~CPOR()
{

}
