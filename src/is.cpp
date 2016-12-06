#include "is.h"
int Cis::my_init(void *p)
{
	this->name = "Cis";
	this->alias = "is";
	return 0;
}

Cis::Cis()
{
	this->my_init();
}
