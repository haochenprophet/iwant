#include "naked.h"
int Cnaked::my_init(void *p)
{
	this->name = "Cnaked";
	this->alias = "naked";
	return 0;
}

Cnaked::Cnaked()
{
	this->my_init();
}
