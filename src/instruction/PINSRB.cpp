#include "PINSRB.h"
int CPINSRB::my_init(void *p)
{
	this->name = "CPINSRB";
	this->alias = "PINSRB";
	return 0;
}

CPINSRB::CPINSRB()
{
	this->my_init();
}

CPINSRB::~CPINSRB()
{

}
