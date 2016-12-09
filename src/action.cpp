#include "action.h"
int Caction::my_init(void *p)
{
	this->name = "Caction";
	this->alias = "action";
	return 0;
}

Caction::Caction()
{
	this->my_init();
}
