#include "PMINSD.h"
int CPMINSD::my_init(void *p)
{
	this->name = "CPMINSD";
	this->alias = "PMINSD";
	return 0;
}

CPMINSD::CPMINSD()
{
	this->my_init();
}

CPMINSD::~CPMINSD()
{

}
