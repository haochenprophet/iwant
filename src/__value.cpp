#include "__value.h"
int C__value::my_init(void *p)
{
	this->name = "C__value";
	this->alias = "__value";
	return 0;
}

C__value::C__value()
{
	this->my_init();
}
