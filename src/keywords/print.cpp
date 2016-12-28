#include "print.h"
int Cprint::my_init(void *p)
{
	this->name = "Cprint";
	this->alias = "print";
	return 0;
}

Cprint::Cprint()
{
	this->my_init();
}
