#include "interface_class.h"
int Cinterface_class::my_init(void *p)
{
	this->name = "Cinterface_class";
	this->alias = "interface_class";
	return 0;
}

Cinterface_class::Cinterface_class()
{
	this->my_init();
}
