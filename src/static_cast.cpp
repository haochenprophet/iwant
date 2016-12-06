#include "static_cast.h"
int Cstatic_cast::my_init(void *p)
{
	this->name = "Cstatic_cast";
	this->alias = "static_cast";
	return 0;
}

Cstatic_cast::Cstatic_cast()
{
	this->my_init();
}
