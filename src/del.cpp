#include "del.h"
int Cdel::my_init(void *p)
{
	this->name = "Cdel";
	this->alias = "del";
	return 0;
}

Cdel::Cdel()
{
	this->my_init();
}
