#include "this.h"
int Cthis::my_init(void *p)
{
	this->name = "Cthis";
	this->alias = "this";
	return 0;
}

Cthis::Cthis()
{
	this->my_init();
}
