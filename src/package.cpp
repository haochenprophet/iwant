#include "package.h"
int Cpackage::my_init(void *p)
{
	this->name = "Cpackage";
	this->alias = "package";
	return 0;
}

Cpackage::Cpackage()
{
	this->my_init();
}
