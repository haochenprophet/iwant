#include "namespace.h"
int Cnamespace::my_init(void *p)
{
	this->name = "Cnamespace";
	this->alias = "namespace";
	return 0;
}

Cnamespace::Cnamespace()
{
	this->my_init();
}
