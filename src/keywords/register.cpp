#include "register.h"
int Cregister::my_init(void *p)
{
	this->name = "Cregister";
	this->alias = "register";
	return 0;
}

Cregister::Cregister()
{
	this->my_init();
}
