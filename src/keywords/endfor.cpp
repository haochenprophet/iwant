#include "endfor.h"
int Cendfor::my_init(void *p)
{
	this->name = "Cendfor";
	this->alias = "endfor";
	return 0;
}

Cendfor::Cendfor()
{
	this->my_init();
}
