#include "step.h"
int Cstep::my_init(void *p)
{
	this->name = "Cstep";
	this->alias = "step";
	return 0;
}

Cstep::Cstep()
{
	this->my_init();
}
