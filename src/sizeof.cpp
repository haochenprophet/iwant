#include "sizeof.h"
int Csizeof::my_init(void *p)
{
	this->name = "Csizeof";
	this->alias = "sizeof";
	return 0;
}

Csizeof::Csizeof()
{
	this->my_init();
}
