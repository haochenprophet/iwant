#include "list.h"
int Clist::my_init(void *p)
{
	this->name = "Clist";
	this->alias = "list";
	return 0;
}

Clist::Clist()
{
	this->my_init();
}
