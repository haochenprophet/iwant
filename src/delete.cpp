#include "delete.h"
int Cdelete::my_init(void *p)
{
	this->name = "Cdelete";
	this->alias = "delete";
	return 0;
}

Cdelete::Cdelete()
{
	this->my_init();
}
