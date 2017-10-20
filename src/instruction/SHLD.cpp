#include "SHLD.h"
int CSHLD::my_init(void *p)
{
	this->name = "CSHLD";
	this->alias = "SHLD";
	return 0;
}

CSHLD::CSHLD()
{
	this->my_init();
}

CSHLD::~CSHLD()
{

}
