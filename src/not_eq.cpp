#include "not_eq.h"
int Cnot_eq::my_init(void *p)
{
	this->name = "Cnot_eq";
	this->alias = "not_eq";
	return 0;
}

Cnot_eq::Cnot_eq()
{
	this->my_init();
}
