#include "from.h"
int Cfrom::my_init(void *p)
{
	this->name = "Cfrom";
	this->alias = "from";
	return 0;
}

Cfrom::Cfrom()
{
	this->my_init();
}
