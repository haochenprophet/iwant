#include "nullptr.h"
int Cnullptr::my_init(void *p)
{
	this->name = "Cnullptr";
	this->alias = "nullptr";
	return 0;
}

Cnullptr::Cnullptr()
{
	this->my_init();
}
