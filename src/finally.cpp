#include "finally.h"
int Cfinally::my_init(void *p)
{
	this->name = "Cfinally";
	this->alias = "finally";
	return 0;
}

Cfinally::Cfinally()
{
	this->my_init();
}
