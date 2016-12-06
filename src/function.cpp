#include "function.h"
int Cfunction::my_init(void *p)
{
	this->name = "Cfunction";
	this->alias = "function";
	return 0;
}

Cfunction::Cfunction()
{
	this->my_init();
}
