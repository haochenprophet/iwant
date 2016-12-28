#include "var.h"
int Cvar::my_init(void *p)
{
	this->name = "Cvar";
	this->alias = "var";
	return 0;
}

Cvar::Cvar()
{
	this->my_init();
}
