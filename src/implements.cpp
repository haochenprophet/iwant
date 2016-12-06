#include "implements.h"
int Cimplements::my_init(void *p)
{
	this->name = "Cimplements";
	this->alias = "implements";
	return 0;
}

Cimplements::Cimplements()
{
	this->my_init();
}
