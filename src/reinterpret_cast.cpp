#include "reinterpret_cast.h"
int Creinterpret_cast::my_init(void *p)
{
	this->name = "Creinterpret_cast";
	this->alias = "reinterpret_cast";
	return 0;
}

Creinterpret_cast::Creinterpret_cast()
{
	this->my_init();
}
