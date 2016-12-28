#include "auto.h"
int Cauto::my_init(void *p)
{
	this->name = "Cauto";
	this->alias = "auto";
	return 0;
}

Cauto::Cauto()
{
	this->my_init();
}
