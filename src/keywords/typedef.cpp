#include "typedef.h"
int Ctypedef::my_init(void *p)
{
	this->name = "Ctypedef";
	this->alias = "typedef";
	return 0;
}

Ctypedef::Ctypedef()
{
	this->my_init();
}
