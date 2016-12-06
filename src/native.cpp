#include "native.h"
int Cnative::my_init(void *p)
{
	this->name = "Cnative";
	this->alias = "native";
	return 0;
}

Cnative::Cnative()
{
	this->my_init();
}
