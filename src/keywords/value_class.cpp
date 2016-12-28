#include "value_class.h"
int Cvalue_class::my_init(void *p)
{
	this->name = "Cvalue_class";
	this->alias = "value_class";
	return 0;
}

Cvalue_class::Cvalue_class()
{
	this->my_init();
}
