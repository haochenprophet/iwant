#include "explicit.h"
int Cexplicit::my_init(void *p)
{
	this->name = "Cexplicit";
	this->alias = "explicit";
	return 0;
}

Cexplicit::Cexplicit()
{
	this->my_init();
}
