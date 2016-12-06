#include "else.h"
int Celse::my_init(void *p)
{
	this->name = "Celse";
	this->alias = "else";
	return 0;
}

Celse::Celse()
{
	this->my_init();
}
