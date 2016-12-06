#include "union.h"
int Cunion::my_init(void *p)
{
	this->name = "Cunion";
	this->alias = "union";
	return 0;
}

Cunion::Cunion()
{
	this->my_init();
}
