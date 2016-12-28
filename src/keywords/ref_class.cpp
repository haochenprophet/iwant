#include "ref_class.h"
int Cref_class::my_init(void *p)
{
	this->name = "Cref_class";
	this->alias = "ref_class";
	return 0;
}

Cref_class::Cref_class()
{
	this->my_init();
}
