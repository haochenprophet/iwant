#include "operator_.h"
int Coperator::my_init(void *p)
{
	this->name = "Coperator";
	this->alias = "operator";
	return 0;
}

Coperator::Coperator()
{
	this->my_init();
}
