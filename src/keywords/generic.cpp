#include "generic.h"
int Cgeneric::my_init(void *p)
{
	this->name = "Cgeneric";
	this->alias = "generic";
	return 0;
}

Cgeneric::Cgeneric()
{
	this->my_init();
}
