#include "def.h"
int Cdef::my_init(void *p)
{
	this->name = "Cdef";
	this->alias = "def";
	return 0;
}

Cdef::Cdef()
{
	this->my_init();
}
