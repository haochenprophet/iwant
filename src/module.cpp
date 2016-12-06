#include "module.h"
int Cmodule::my_init(void *p)
{
	this->name = "Cmodule";
	this->alias = "module";
	return 0;
}

Cmodule::Cmodule()
{
	this->my_init();
}
