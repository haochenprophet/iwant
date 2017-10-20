#include "FCLEX.h"
int CFCLEX::my_init(void *p)
{
	this->name = "CFCLEX";
	this->alias = "FCLEX";
	return 0;
}

CFCLEX::CFCLEX()
{
	this->my_init();
}

CFCLEX::~CFCLEX()
{

}
