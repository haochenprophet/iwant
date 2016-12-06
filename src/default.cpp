#include "default.h"
int Cdefault::my_init(void *p)
{
	this->name = "Cdefault";
	this->alias = "default";
	return 0;
}

Cdefault::Cdefault()
{
	this->my_init();
}
