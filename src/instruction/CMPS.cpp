#include "CMPS.h"
int CCMPS::my_init(void *p)
{
	this->name = "CCMPS";
	this->alias = "CMPS";
	return 0;
}

CCMPS::CCMPS()
{
	this->my_init();
}

CCMPS::~CCMPS()
{

}
