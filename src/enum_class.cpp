#include "enum_class.h"
int Cenum_class::my_init(void *p)
{
	this->name = "Cenum_class";
	this->alias = "enum_class";
	return 0;
}

Cenum_class::Cenum_class()
{
	this->my_init();
}
