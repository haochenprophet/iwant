#include "public.h"
int Cpublic::my_init(void *p)
{
	this->name = "Cpublic";
	this->alias = "public";
	return 0;
}

Cpublic::Cpublic()
{
	this->my_init();
}
