#include "goto.h"
int Cgoto::my_init(void *p)
{
	this->name = "Cgoto";
	this->alias = "goto";
	return 0;
}

Cgoto::Cgoto()
{
	this->my_init();
}
