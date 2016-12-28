#include "if.h"
int Cif::my_init(void *p)
{
	this->name = "Cif";
	this->alias = "if";
	return 0;
}

Cif::Cif()
{
	this->my_init();
}
