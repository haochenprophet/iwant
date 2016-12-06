#include "assert.h"
int Cassert::my_init(void *p)
{
	this->name = "Cassert";
	this->alias = "assert";
	return 0;
}

Cassert::Cassert()
{
	this->my_init();
}
