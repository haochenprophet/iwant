#include "do.h"
int Cdo::my_init(void *p)
{
	this->name = "Cdo";
	this->alias = "do";
	return 0;
}

Cdo::Cdo()
{
	this->my_init();
}
