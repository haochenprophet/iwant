#include "uuid.h"
int Cuuid::my_init(void *p)
{
	this->name = "Cuuid";
	this->alias = "uuid";
	return 0;
}

Cuuid::Cuuid()
{
	this->my_init();
}
