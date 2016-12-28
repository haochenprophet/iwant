#include "__virtual_inheritance.h"
int C__virtual_inheritance::my_init(void *p)
{
	this->name = "C__virtual_inheritance";
	this->alias = "__virtual_inheritance";
	return 0;
}

C__virtual_inheritance::C__virtual_inheritance()
{
	this->my_init();
}
