#include "enum_struct.h"
int Cenum_struct::my_init(void *p)
{
	this->name = "Cenum_struct";
	this->alias = "enum_struct";
	return 0;
}

Cenum_struct::Cenum_struct()
{
	this->my_init();
}
