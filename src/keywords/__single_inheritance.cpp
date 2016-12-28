#include "__single_inheritance.h"
int C__single_inheritance::my_init(void *p)
{
	this->name = "C__single_inheritance";
	this->alias = "__single_inheritance";
	return 0;
}

C__single_inheritance::C__single_inheritance()
{
	this->my_init();
}
