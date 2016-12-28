#include "double.h"
int Cdouble::my_init(void *p)
{
	this->name = "Cdouble";
	this->alias = "double";
	return 0;
}

Cdouble::Cdouble()
{
	this->my_init();
}
