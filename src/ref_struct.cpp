#include "ref_struct.h"
int Cref_struct::my_init(void *p)
{
	this->name = "Cref_struct";
	this->alias = "ref_struct";
	return 0;
}

Cref_struct::Cref_struct()
{
	this->my_init();
}
