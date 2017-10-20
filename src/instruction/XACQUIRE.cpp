#include "XACQUIRE.h"
int CXACQUIRE::my_init(void *p)
{
	this->name = "CXACQUIRE";
	this->alias = "XACQUIRE";
	return 0;
}

CXACQUIRE::CXACQUIRE()
{
	this->my_init();
}

CXACQUIRE::~CXACQUIRE()
{

}
