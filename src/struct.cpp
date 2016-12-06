#include "struct.h"
int Cstruct::my_init(void *p)
{
	this->name = "Cstruct";
	this->alias = "struct";
	return 0;
}

Cstruct::Cstruct()
{
	this->my_init();
}
