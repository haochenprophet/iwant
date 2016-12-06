#include "eval.h"
int Ceval::my_init(void *p)
{
	this->name = "Ceval";
	this->alias = "eval";
	return 0;
}

Ceval::Ceval()
{
	this->my_init();
}
