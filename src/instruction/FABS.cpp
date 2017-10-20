#include "FABS.h"
int CFABS::my_init(void *p)
{
	this->name = "CFABS";
	this->alias = "FABS";
	return 0;
}

CFABS::CFABS()
{
	this->my_init();
}

CFABS::~CFABS()
{

}
