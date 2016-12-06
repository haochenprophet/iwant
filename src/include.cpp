#include "include.h"
int Cinclude::my_init(void *p)
{
	this->name = "Cinclude";
	this->alias = "include";
	return 0;
}

Cinclude::Cinclude()
{
	this->my_init();
}
