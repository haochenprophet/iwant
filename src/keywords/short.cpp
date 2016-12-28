#include "short.h"
int Cshort::my_init(void *p)
{
	this->name = "Cshort";
	this->alias = "short";
	return 0;
}

Cshort::Cshort()
{
	this->my_init();
}
