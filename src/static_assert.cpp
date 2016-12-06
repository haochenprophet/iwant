#include "static_assert.h"
int Cstatic_assert::my_init(void *p)
{
	this->name = "Cstatic_assert";
	this->alias = "static_assert";
	return 0;
}

Cstatic_assert::Cstatic_assert()
{
	this->my_init();
}
