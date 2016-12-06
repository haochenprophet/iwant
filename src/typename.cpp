#include "typename.h"
int Ctypename::my_init(void *p)
{
	this->name = "Ctypename";
	this->alias = "typename";
	return 0;
}

Ctypename::Ctypename()
{
	this->my_init();
}
