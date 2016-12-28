#include "case.h"
int Ccase::my_init(void *p)
{
	this->name = "Ccase";
	this->alias = "case";
	return 0;
}

Ccase::Ccase()
{
	this->my_init();
}
