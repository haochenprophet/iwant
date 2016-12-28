#include "value_struct.h"
int Cvalue_struct::my_init(void *p)
{
	this->name = "Cvalue_struct";
	this->alias = "value_struct";
	return 0;
}

Cvalue_struct::Cvalue_struct()
{
	this->my_init();
}
