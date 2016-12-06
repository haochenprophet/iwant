#include "long.h"
int Clong::my_init(void *p)
{
	this->name = "Clong";
	this->alias = "long";
	return 0;
}

Clong::Clong()
{
	this->my_init();
}
