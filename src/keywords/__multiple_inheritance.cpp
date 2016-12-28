#include "__multiple_inheritance.h"
int C__multiple_inheritance::my_init(void *p)
{
	this->name = "C__multiple_inheritance";
	this->alias = "__multiple_inheritance";
	return 0;
}

C__multiple_inheritance::C__multiple_inheritance()
{
	this->my_init();
}
