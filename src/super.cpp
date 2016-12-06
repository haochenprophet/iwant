#include "super.h"
int Csuper::my_init(void *p)
{
	this->name = "Csuper";
	this->alias = "super";
	return 0;
}

Csuper::Csuper()
{
	this->my_init();
}
