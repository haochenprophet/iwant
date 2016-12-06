#include "interface_struct.h"
int Cinterface_struct::my_init(void *p)
{
	this->name = "Cinterface_struct";
	this->alias = "interface_struct";
	return 0;
}

Cinterface_struct::Cinterface_struct()
{
	this->my_init();
}
