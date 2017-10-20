#include "SHRD.h"
int CSHRD::my_init(void *p)
{
	this->name = "CSHRD";
	this->alias = "SHRD";
	return 0;
}

CSHRD::CSHRD()
{
	this->my_init();
}

CSHRD::~CSHRD()
{

}
