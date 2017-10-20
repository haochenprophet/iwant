#include "PMULLD.h"
int CPMULLD::my_init(void *p)
{
	this->name = "CPMULLD";
	this->alias = "PMULLD";
	return 0;
}

CPMULLD::CPMULLD()
{
	this->my_init();
}

CPMULLD::~CPMULLD()
{

}
