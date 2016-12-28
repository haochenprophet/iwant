#include "property.h"
int Cproperty::my_init(void *p)
{
	this->name = "Cproperty";
	this->alias = "property";
	return 0;
}

Cproperty::Cproperty()
{
	this->my_init();
}
