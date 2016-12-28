#include "require_once.h"
int Crequire_once::my_init(void *p)
{
	this->name = "Crequire_once";
	this->alias = "require_once";
	return 0;
}

Crequire_once::Crequire_once()
{
	this->my_init();
}
