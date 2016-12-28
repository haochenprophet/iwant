#include "float.h"
int Cfloat::my_init(void *p)
{
	this->name = "Cfloat";
	this->alias = "float";
	return 0;
}

Cfloat::Cfloat()
{
	this->my_init();
}
