#include "FPREM1.h"
int CFPREM1::my_init(void *p)
{
	this->name = "CFPREM1";
	this->alias = "FPREM1";
	return 0;
}

CFPREM1::CFPREM1()
{
	this->my_init();
}

CFPREM1::~CFPREM1()
{

}
