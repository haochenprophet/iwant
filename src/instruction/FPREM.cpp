#include "FPREM.h"
int CFPREM::my_init(void *p)
{
	this->name = "CFPREM";
	this->alias = "FPREM";
	return 0;
}

CFPREM::CFPREM()
{
	this->my_init();
}

CFPREM::~CFPREM()
{

}
