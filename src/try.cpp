#include "try.h"
int Ctry::my_init(void *p)
{
	this->name = "Ctry";
	this->alias = "try";
	return 0;
}

Ctry::Ctry()
{
	this->my_init();
}
