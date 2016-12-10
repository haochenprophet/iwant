#include "get.h"
int Cget::my_init(void *p)
{
	this->name = "Cget";
	this->alias = "get";
	return 0;
}

Cget::Cget()
{
	this->my_init();
}
