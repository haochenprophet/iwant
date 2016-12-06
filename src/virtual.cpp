#include "virtual.h"
int Cvirtual::my_init(void *p)
{
	this->name = "Cvirtual";
	this->alias = "virtual";
	return 0;
}

Cvirtual::Cvirtual()
{
	this->my_init();
}
