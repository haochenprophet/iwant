#include "true_.h"
int Ctrue::my_init(void *p)
{
	this->name = "Ctrue";
	this->alias = "true";
	return 0;
}

Ctrue::Ctrue()
{
	this->my_init();
}
