#include "unsigned.h"
int Cunsigned::my_init(void *p)
{
	this->name = "Cunsigned";
	this->alias = "unsigned";
	return 0;
}

Cunsigned::Cunsigned()
{
	this->my_init();
}
