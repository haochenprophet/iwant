#include "price.h"
int Cprice::my_init(void *p)
{
	this->name = "Cprice";
	this->alias = "price";
	return 0;
}

Cprice::Cprice()
{
	this->my_init();
}
