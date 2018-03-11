#include "XOR_I.h"
int CXOR::my_init(void *p)
{
	this->name = "CXOR";
	this->alias = "XOR";
	return 0;
}

CXOR::CXOR()
{
	this->my_init();
}

CXOR::~CXOR()
{

}
