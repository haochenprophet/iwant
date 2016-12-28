#include "trait.h"
int Ctrait::my_init(void *p)
{
	this->name = "Ctrait";
	this->alias = "trait";
	return 0;
}

Ctrait::Ctrait()
{
	this->my_init();
}
