#include "or_eq.h"
int Cor_eq::my_init(void *p)
{
	this->name = "Cor_eq";
	this->alias = "or_eq";
	return 0;
}

Cor_eq::Cor_eq()
{
	this->my_init();
}
