#include "use.h"
int Cuse::my_init(void *p)
{
	this->name = "Cuse";
	this->alias = "use";
	return 0;
}

Cuse::Cuse()
{
	this->my_init();
}
