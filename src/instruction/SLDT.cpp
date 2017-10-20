#include "SLDT.h"
int CSLDT::my_init(void *p)
{
	this->name = "CSLDT";
	this->alias = "SLDT";
	return 0;
}

CSLDT::CSLDT()
{
	this->my_init();
}

CSLDT::~CSLDT()
{

}
