#include "end.h"
int Cend::my_init(void *p)
{
	this->name = "Cend";
	this->alias = "end";
	return 0;
}

Cend::Cend()
{
	this->my_init();
}
