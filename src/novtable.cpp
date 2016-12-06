#include "novtable.h"
int Cnovtable::my_init(void *p)
{
	this->name = "Cnovtable";
	this->alias = "novtable";
	return 0;
}

Cnovtable::Cnovtable()
{
	this->my_init();
}
