#include "and_eq.h"
int Cand_eq::my_init(void *p)
{
	this->name = "Cand_eq";
	this->alias = "and_eq";
	return 0;
}

Cand_eq::Cand_eq()
{
	this->my_init();
}
