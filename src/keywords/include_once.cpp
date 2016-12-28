#include "include_once.h"
int Cinclude_once::my_init(void *p)
{
	this->name = "Cinclude_once";
	this->alias = "include_once";
	return 0;
}

Cinclude_once::Cinclude_once()
{
	this->my_init();
}
