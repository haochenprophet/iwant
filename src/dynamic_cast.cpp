#include "dynamic_cast.h"
int Cdynamic_cast::my_init(void *p)
{
	this->name = "Cdynamic_cast";
	this->alias = "dynamic_cast";
	return 0;
}

Cdynamic_cast::Cdynamic_cast()
{
	this->my_init();
}
