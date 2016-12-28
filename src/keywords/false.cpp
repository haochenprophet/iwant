#include "false.h"
int Cfalse::my_init(void *p)
{
	this->name = "Cfalse";
	this->alias = "false";
	return 0;
}

Cfalse::Cfalse()
{
	this->my_init();
}
