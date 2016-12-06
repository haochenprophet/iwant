#include "transient.h"
int Ctransient::my_init(void *p)
{
	this->name = "Ctransient";
	this->alias = "transient";
	return 0;
}

Ctransient::Ctransient()
{
	this->my_init();
}
