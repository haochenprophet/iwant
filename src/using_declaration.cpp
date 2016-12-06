#include "using_declaration.h"
int Cusing_declaration::my_init(void *p)
{
	this->name = "Cusing_declaration";
	this->alias = "using_declaration";
	return 0;
}

Cusing_declaration::Cusing_declaration()
{
	this->my_init();
}
