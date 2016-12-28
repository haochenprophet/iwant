#include "delegate.h"
int Cdelegate::my_init(void *p)
{
	this->name = "Cdelegate";
	this->alias = "delegate";
	return 0;
}

Cdelegate::Cdelegate()
{
	this->my_init();
}
