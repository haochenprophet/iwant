#include "throw.h"
int Cthrow::my_init(void *p)
{
	this->name = "Cthrow";
	this->alias = "throw";
	return 0;
}

Cthrow::Cthrow()
{
	this->my_init();
}
