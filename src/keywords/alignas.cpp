#include "alignas.h"
int Calignas::my_init(void *p)
{
	this->name = "Calignas";
	this->alias = "alignas";
	return 0;
}

Calignas::Calignas()
{
	this->my_init();
}
