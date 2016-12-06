#include "decltype.h"
int Cdecltype::my_init(void *p)
{
	this->name = "Cdecltype";
	this->alias = "decltype";
	return 0;
}

Cdecltype::Cdecltype()
{
	this->my_init();
}
