#include "noreturn.h"
int Cnoreturn::my_init(void *p)
{
	this->name = "Cnoreturn";
	this->alias = "noreturn";
	return 0;
}

Cnoreturn::Cnoreturn()
{
	this->my_init();
}
