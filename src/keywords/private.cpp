#include "private.h"
int Cprivate::my_init(void *p)
{
	this->name = "Cprivate";
	this->alias = "private";
	return 0;
}

Cprivate::Cprivate()
{
	this->my_init();
}
