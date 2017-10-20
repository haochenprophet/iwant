#include "XABORT.h"
int CXABORT::my_init(void *p)
{
	this->name = "CXABORT";
	this->alias = "XABORT";
	return 0;
}

CXABORT::CXABORT()
{
	this->my_init();
}

CXABORT::~CXABORT()
{

}
