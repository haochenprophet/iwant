#include "interface.h"
int Cinterface::my_init(void *p)
{
	this->name = "Cinterface";
	this->alias = "interface";
	return 0;
}

Cinterface::Cinterface()
{
	this->my_init();
}
