#include "extends.h"
int Cextends::my_init(void *p)
{
	this->name = "Cextends";
	this->alias = "extends";
	return 0;
}

Cextends::Cextends()
{
	this->my_init();
}
