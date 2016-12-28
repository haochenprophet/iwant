#include "callable.h"
int Ccallable::my_init(void *p)
{
	this->name = "Ccallable";
	this->alias = "callable";
	return 0;
}

Ccallable::Ccallable()
{
	this->my_init();
}
