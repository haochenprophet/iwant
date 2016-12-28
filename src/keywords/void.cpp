#include "void.h"
int Cvoid::my_init(void *p)
{
	this->name = "Cvoid";
	this->alias = "void";
	return 0;
}

Cvoid::Cvoid()
{
	this->my_init();
}
