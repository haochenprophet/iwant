#include "not.h"
int Cnot::my_init(void *p)
{
	this->name = "Cnot";
	this->alias = "not";
	return 0;
}

Cnot::Cnot()
{
	this->my_init();
}
