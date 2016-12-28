#include "__noop.h"
int C__noop::my_init(void *p)
{
	this->name = "C__noop";
	this->alias = "__noop";
	return 0;
}

C__noop::C__noop()
{
	this->my_init();
}
