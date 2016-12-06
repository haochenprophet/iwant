#include "empty.h"
int Cempty::my_init(void *p)
{
	this->name = "Cempty";
	this->alias = "empty";
	return 0;
}

Cempty::Cempty()
{
	this->my_init();
}
