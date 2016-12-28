#include "unset.h"
int Cunset::my_init(void *p)
{
	this->name = "Cunset";
	this->alias = "unset";
	return 0;
}

Cunset::Cunset()
{
	this->my_init();
}
