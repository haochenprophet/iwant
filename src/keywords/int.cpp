#include "int.h"
int Cint::my_init(void *p)
{
	this->name = "Cint";
	this->alias = "int";
	return 0;
}

Cint::Cint()
{
	this->my_init();
}
