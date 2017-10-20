#include "PSLLD.h"
int CPSLLD::my_init(void *p)
{
	this->name = "CPSLLD";
	this->alias = "PSLLD";
	return 0;
}

CPSLLD::CPSLLD()
{
	this->my_init();
}

CPSLLD::~CPSLLD()
{

}
