#include "require.h"
int Crequire::my_init(void *p)
{
	this->name = "Crequire";
	this->alias = "require";
	return 0;
}

Crequire::Crequire()
{
	this->my_init();
}
