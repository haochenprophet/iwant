#include "none.h"
int Cnone::my_init(void *p)
{
	this->name = "Cnone";
	this->alias = "none";
	return 0;
}

Cnone::Cnone()
{
	this->my_init();
}
