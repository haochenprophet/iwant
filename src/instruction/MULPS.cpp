#include "MULPS.h"
int CMULPS::my_init(void *p)
{
	this->name = "CMULPS";
	this->alias = "MULPS";
	return 0;
}

CMULPS::CMULPS()
{
	this->my_init();
}

CMULPS::~CMULPS()
{

}
