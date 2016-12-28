#include "volatile.h"
int Cvolatile::my_init(void *p)
{
	this->name = "Cvolatile";
	this->alias = "volatile";
	return 0;
}

Cvolatile::Cvolatile()
{
	this->my_init();
}
