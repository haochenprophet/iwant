#include "while.h"
int Cwhile::my_init(void *p)
{
	this->name = "Cwhile";
	this->alias = "while";
	return 0;
}

Cwhile::Cwhile()
{
	this->my_init();
}
