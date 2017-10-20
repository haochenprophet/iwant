#include "FCOMI.h"
int CFCOMI::my_init(void *p)
{
	this->name = "CFCOMI";
	this->alias = "FCOMI";
	return 0;
}

CFCOMI::CFCOMI()
{
	this->my_init();
}

CFCOMI::~CFCOMI()
{

}
