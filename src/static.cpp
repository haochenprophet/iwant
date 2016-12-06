#include "static.h"
int Cstatic::my_init(void *p)
{
	this->name = "Cstatic";
	this->alias = "static";
	return 0;
}

Cstatic::Cstatic()
{
	this->my_init();
}
