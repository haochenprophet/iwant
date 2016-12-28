#include "elseif.h"
int Celseif::my_init(void *p)
{
	this->name = "Celseif";
	this->alias = "elseif";
	return 0;
}

Celseif::Celseif()
{
	this->my_init();
}
