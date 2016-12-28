#include "mutable.h"
int Cmutable::my_init(void *p)
{
	this->name = "Cmutable";
	this->alias = "mutable";
	return 0;
}

Cmutable::Cmutable()
{
	this->my_init();
}
