#include "SQRTPS.h"
int CSQRTPS::my_init(void *p)
{
	this->name = "CSQRTPS";
	this->alias = "SQRTPS";
	return 0;
}

CSQRTPS::CSQRTPS()
{
	this->my_init();
}

CSQRTPS::~CSQRTPS()
{

}
